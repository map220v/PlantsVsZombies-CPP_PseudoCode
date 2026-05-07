// Class: CustomRailInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomRailInfo::CustomRailInfo() */

void __thiscall CustomRailInfo::CustomRailInfo(CustomRailInfo *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"railcart_cowboy");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomRailInfo::CustomRailInfo(std::string const&) */

void __thiscall CustomRailInfo::CustomRailInfo(CustomRailInfo *this,string *param_1)

{
  FUN_05475d88();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* CustomRailInfo::~CustomRailInfo() */

void __thiscall CustomRailInfo::~CustomRailInfo(CustomRailInfo *this)

{
  std::vector<RailInfo,std::allocator<RailInfo>>::~vector
            ((vector<RailInfo,std::allocator<RailInfo>> *)(this + 0x20));
  std::vector<RailCartInfo,std::allocator<RailCartInfo>>::~vector
            ((vector<RailCartInfo,std::allocator<RailCartInfo>> *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* CustomRailInfo::CustomRailInfo(CustomRailInfo const&) */

void __thiscall CustomRailInfo::CustomRailInfo(CustomRailInfo *this,CustomRailInfo *param_1)

{
  FUN_05475d88();
  std::vector<RailCartInfo,std::allocator<RailCartInfo>>::vector
            ((vector<RailCartInfo,std::allocator<RailCartInfo>> *)(this + 8),(vector *)(param_1 + 8)
            );
  std::vector<RailInfo,std::allocator<RailInfo>>::vector
            ((vector<RailInfo,std::allocator<RailInfo>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  return;
}


/* CustomRailInfo::TEMPNAMEPLACEHOLDERVALUE(CustomRailInfo const&) */

CustomRailInfo * __thiscall CustomRailInfo::operator=(CustomRailInfo *this,CustomRailInfo *param_1)

{
  thunk_FUN_05475e00();
  std::vector<RailCartInfo,std::allocator<RailCartInfo>>::operator=
            ((vector<RailCartInfo,std::allocator<RailCartInfo>> *)(this + 8),(vector *)(param_1 + 8)
            );
  std::vector<RailInfo,std::allocator<RailInfo>>::operator=
            ((vector<RailInfo,std::allocator<RailInfo>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  return this;
}


/* CustomRailInfo::TEMPNAMEPLACEHOLDERVALUE(CustomRailInfo&&) */

CustomRailInfo * __thiscall CustomRailInfo::operator=(CustomRailInfo *this,CustomRailInfo *param_1)

{
  FUN_05474278();
  std::vector<RailCartInfo,std::allocator<RailCartInfo>>::operator=
            ((vector<RailCartInfo,std::allocator<RailCartInfo>> *)(this + 8),(vector *)(param_1 + 8)
            );
  std::vector<RailInfo,std::allocator<RailInfo>>::operator=
            ((vector<RailInfo,std::allocator<RailInfo>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  return this;
}


/* CustomRailInfo::CustomRailInfo(CustomRailInfo&&) */

void __thiscall CustomRailInfo::CustomRailInfo(CustomRailInfo *this,CustomRailInfo *param_1)

{
  FUN_05474148();
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  return;
}

