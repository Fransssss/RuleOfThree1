// Fransiskus Agapa

#ifndef RULEOFTHREE1_INTDATA_H
#define RULEOFTHREE1_INTDATA_H


class intData
{
private:
    int* _data;
public:
    intData();
    void SetData( const int& theData);
    int GetData() const;
    intData( const intData& theData);            //  Copy constructor
    intData& operator=(const intData& theData);  //  Copy Assignment
    ~intData();                                  //  Destructor
};


#endif //RULEOFTHREE1_INTDATA_H
