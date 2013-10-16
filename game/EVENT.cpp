#include "EVENT.hpp"
#include "../addr.hpp"
namespace libm2{

void intrusive_ptr_add_ref(event *e){
    ((void(*)(event*))Addr::EVENT::intrusive_ptr_add_ref)(e);
};
void intrusive_ptr_release(event *e){
    ((void(*)(event*))Addr::EVENT::intrusive_ptr_release)(e);
}
LPEVENT event_create_ex(TEVENTFUNC func, event_info_data * info, long when){
    return ((LPEVENT(*)(TEVENTFUNC,event_info_data*,long))Addr::EVENT::event_create_ex)(func, info, when);
};
}
