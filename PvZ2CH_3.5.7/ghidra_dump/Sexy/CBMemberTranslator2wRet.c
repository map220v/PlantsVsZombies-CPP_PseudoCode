// Class: Sexy::CBMemberTranslator2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*,PlantBoomFlower,bool(PlantBoomFlower::*)(Sexy::SexyVector3&,PlantLauncherProps_const*)>


/* Sexy::CBMemberTranslator2wRet<bool, Sexy::SexyVector3&, PlantLauncherProps const*,
   PlantBoomFlower, bool (PlantBoomFlower::*)(Sexy::SexyVector3&, PlantLauncherProps
   const*)>::thunk(Sexy::DelegateBase const&, Sexy::SexyVector3&, PlantLauncherProps const*) */

void Sexy::
     CBMemberTranslator2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*,PlantBoomFlower,bool(PlantBoomFlower::*)(Sexy::SexyVector3&,PlantLauncherProps_const*)>
     ::thunk(DelegateBase *param_1,SexyVector3 *param_2,PlantLauncherProps *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_04115a2c(*(undefined8 *)(param_1 + 0x18));
  plVar3 = (long *)std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_1);
  lVar1 = plVar3[1] >> 1;
  if ((plVar3[1] & 1U) != 0) {
    (**(code **)(*(long *)(lVar2 + lVar1) + *plVar3))(lVar2 + lVar1);
    return;
  }
  (*(code *)*plVar3)(lVar2 + lVar1,param_2,param_3);
  return;
}


/* Sexy::CBMemberTranslator2wRet<std::string, std::string&, int, PVZRemoteControl, std::string
   (PVZRemoteControl::*)(std::string&, int)>::thunk(Sexy::DelegateBase const&, std::string&, int) */

void __thiscall
Sexy::
CBMemberTranslator2wRet<std::string,std::string&,int,PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int)>
::thunk(CBMemberTranslator2wRet<std::string,std::string&,int,PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int)>
        *this,DelegateBase *param_1,string *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_04402e40(*(undefined8 *)(this + 0x18),param_1,param_2,param_3);
  plVar3 = (long *)std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
  lVar1 = plVar3[1] >> 1;
  if ((plVar3[1] & 1U) != 0) {
    (**(code **)(*(long *)(lVar2 + lVar1) + *plVar3))(lVar2 + lVar1);
    return;
  }
  (*(code *)*plVar3)(lVar2 + lVar1,param_1,param_2);
  return;
}

