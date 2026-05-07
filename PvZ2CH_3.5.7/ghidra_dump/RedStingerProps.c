// Class: RedStingerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedStingerProps::StaticClassInit() */

void RedStingerProps::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"RedStingerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04114770,0x2f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedStingerProps::StaticGetClass() */

long * RedStingerProps::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = StarRateProps::StaticGetClass();
  (*pcVar3)(plVar1,"RedStingerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RedStingerProps::GetClass() const */

long * RedStingerProps::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = StarRateProps::StaticGetClass();
  (*pcVar3)(plVar1,"RedStingerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RedStingerProps::RedStingerProps() */

void __thiscall RedStingerProps::RedStingerProps(RedStingerProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined ***)this = &PTR_GetClass_067e64d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d8));
  *(undefined4 *)(this + 0x2f0) = 0x40400000;
  return;
}


/* RedStingerProps::StaticNew() */

RedStingerProps * RedStingerProps::StaticNew(void)

{
  RedStingerProps *this;
  
  this = ::operator_new(0x2f8);
  RedStingerProps(this);
  return this;
}


/* RedStingerProps::~RedStingerProps() */

void __thiscall RedStingerProps::~RedStingerProps(RedStingerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e64d0;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2d8));
  std::vector<StingerLocationStateData,std::allocator<StingerLocationStateData>>::~vector
            ((vector<StingerLocationStateData,std::allocator<StingerLocationStateData>> *)
             (this + 0x2c0));
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* RedStingerProps::~RedStingerProps() */

void __thiscall RedStingerProps::~RedStingerProps(RedStingerProps *this)

{
  ~RedStingerProps(this);
  AK::FreeHook(this);
  return;
}

