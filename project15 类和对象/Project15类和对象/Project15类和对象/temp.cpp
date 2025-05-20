#include <memory>
#include <atomic>
#include <string>
#include <stdexcept>

class Person {
public:
    Person() :
        m_Name(std::make_shared<std::string>()),
        m_Age(18),
        m_Idol(std::make_shared<std::string>())
    {
        // ��ʼ����֤����ָ����Ч
        *m_Name = "";
        *m_Idol = "";
    }

    // �̰߳�ȫ�����÷���
    void setName(const std::string& name) {
        auto newName = std::make_shared<std::string>(name);
        std::atomic_store(&m_Name, newName);
    }

    // �̰߳�ȫ�Ļ�ȡ����
    std::string getName() const {
        return *std::atomic_load(&m_Name);
    }

    // ����֤����������
    void setAge(int age) {
        if (age < 0 || age > 150) {
            throw std::out_of_range("���������0-150֮��");
        }
        m_Age.store(age, std::memory_order_release);
    }

    int getAge() const {
        return m_Age.load(std::memory_order_acquire);
    }

    void setIdol(const std::string& idol) {
        auto newIdol = std::make_shared<std::string>(idol);
        std::atomic_store(&m_Idol, newIdol);
    }

private:
    std::shared_ptr<std::string> m_Name;
    std::atomic<int> m_Age;
    std::shared_ptr<std::string> m_Idol;

    // ���ÿ���
    Person(const Person&) = delete;
    Person& operator=(const Person&) = delete;
};