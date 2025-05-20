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
        // 初始化保证所有指针有效
        *m_Name = "";
        *m_Idol = "";
    }

    // 线程安全的设置方法
    void setName(const std::string& name) {
        auto newName = std::make_shared<std::string>(name);
        std::atomic_store(&m_Name, newName);
    }

    // 线程安全的获取方法
    std::string getName() const {
        return *std::atomic_load(&m_Name);
    }

    // 带验证的年龄设置
    void setAge(int age) {
        if (age < 0 || age > 150) {
            throw std::out_of_range("年龄必须在0-150之间");
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

    // 禁用拷贝
    Person(const Person&) = delete;
    Person& operator=(const Person&) = delete;
};