#ifndef RBTERASE_H_
#define RBTERASE_H_


#include "../../Common/CommandBase.h"
#include "../../Common/TreeBase.h"
#include <functional>
#include <exception>
#include <memory>

using namespace std;

template <typename T, typename V, typename S = less<T>>
class RBTErase : public CommandBase {
    V *spVM;

public:
    RBTErase(V *pVM);
	virtual ~RBTErase();

	virtual void Exec() override;
};

// command bind model
// viewmodel bind model
// just couple model in viewmodel
template <typename T, typename V, typename S>
RBTErase<T, V, S>::RBTErase(V *pVM):
	CommandBase(),
	spVM(pVM)
{
	// ctor from primitive pointer to smart pointer	
}

template <typename T, typename V, typename S>
RBTErase<T, V, S>::~RBTErase()
{
	// trival
}

template <typename T, typename V,typename S>
void RBTErase<T, V, S>::Exec()
{
	// actual T is wonderful
	// naive here
	int para = *(this->parameter); // from CommandBase
	
	bool res = 

        spVM->DSVRBTErase(para);


	spVM->Fire_OnCommandComplete("Erase Command Complete", res);

	return;
}



#endif
