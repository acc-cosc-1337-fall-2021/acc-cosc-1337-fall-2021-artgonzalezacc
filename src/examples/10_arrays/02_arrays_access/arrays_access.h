//header
#include <vector>

#ifndef LIST_ABSTRACT_H
#define LIST_ABSTRACT_H

class List_Abstract
{
public:
    virtual int get_current_size()const = 0;
    virtual int get_index_of(int num) const = 0;
    virtual bool is_empty()const = 0;
    virtual bool add(int num) = 0;
    virtual void clear() = 0;
    virtual int get_frequency_of(int num) = 0;
    virtual bool contains(int num) = 0;
    virtual bool replace(int num, int new_num) = 0;
    virtual std::vector<int> to_vector()const = 0;
};

#endif

#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

class Array_List : public List_Abstract
{
public:
    int get_current_size() const override;
    int get_index_of(int num) const override;
    bool is_empty()const override;
    bool add(int num) override;
    void clear() override;
    int get_frequency_of(int num) override;
    bool contains(int num) override;
    bool replace(int num, int new_num) override;
    std::vector<int> to_vector()const override;
    
private:
    enum {SIZE = 5};
    int list[SIZE];
    int index{0};        
};

#endif