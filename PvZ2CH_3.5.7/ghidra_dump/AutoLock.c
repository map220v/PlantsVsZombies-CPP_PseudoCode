// Class: AutoLock


/* AutoLock::AutoLock(std::function<void ()>, std::function<void ()>) */

void __thiscall AutoLock::AutoLock(AutoLock *this,function *param_2,function *param_3)

{
  bool bVar1;
  
  std::function<void(std::string_const&)>::function
            ((function<void(std::string_const&)> *)this,param_3);
  bVar1 = std::function::operator_cast_to_bool(param_2);
  if (!bVar1) {
    return;
  }
  std::function<void()>::operator()((function<void()> *)param_2);
  return;
}


/* AutoLock::~AutoLock() */

void __thiscall AutoLock::~AutoLock(AutoLock *this)

{
  bool bVar1;
  
  bVar1 = std::function::operator_cast_to_bool((function *)this);
  if (bVar1) {
    std::function<void()>::operator()((function<void()> *)this);
  }
  std::function<bool(Sexy::Touch_const&)>::~function((function<bool(Sexy::Touch_const&)> *)this);
  return;
}

