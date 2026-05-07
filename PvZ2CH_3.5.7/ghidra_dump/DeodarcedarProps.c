// Class: DeodarcedarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DeodarcedarProps::StaticClassInit() */

void DeodarcedarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DeodarcedarProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0363dee0,0x4b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DeodarcedarProps::StaticGetClass() */

long * DeodarcedarProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"DeodarcedarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DeodarcedarProps::GetClass() const */

long * DeodarcedarProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"DeodarcedarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DeodarcedarProps::DeodarcedarProps() */

void __thiscall DeodarcedarProps::DeodarcedarProps(DeodarcedarProps *this)

{
  string *psVar1;
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2d4) = 0x43960000;
  *(undefined4 *)(this + 0x2b8) = 0xbf800000;
  *(undefined ***)this = &PTR_GetClass_0666e440;
  *(undefined4 *)(this + 0x2d0) = 0x42c80000;
  *(undefined4 *)(this + 0x2d8) = 0x43160000;
  *(undefined4 *)(this + 0x304) = 0x42c80000;
  *(undefined4 *)(this + 0x2dc) = 0x3e19999a;
  psVar1 = (string *)&local_8;
  *(undefined4 *)(this + 0x2c4) = 0x40a00000;
  *(undefined4 *)(this + 700) = 0x41700000;
  *(undefined4 *)(this + 0x2c0) = 0x41700000;
  *(undefined4 *)(this + 0x2c8) = 0x41a00000;
  *(undefined4 *)(this + 0x2cc) = 0x41200000;
  *(undefined4 *)(this + 0x2e0) = 0x3e99999a;
  *(undefined4 *)(this + 0x2e4) = 0x41200000;
  *(undefined4 *)(this + 0x2e8) = 0x3f000000;
  *(undefined4 *)(this + 0x2ec) = 0x40200000;
  *(undefined4 *)(this + 0x2f0) = 0x41a00000;
  *(undefined4 *)(this + 0x2f4) = 0x3f000000;
  *(undefined4 *)(this + 0x2f8) = 0x3f800000;
  *(undefined4 *)(this + 0x2fc) = 0x3f800000;
  *(undefined4 *)(this + 0x300) = 0x40400000;
  *(undefined4 *)(this + 0x308) = 0x40400000;
  *(undefined4 *)(this + 0x30c) = 0x41700000;
  *(undefined4 *)(this + 0x310) = 0x3f000000;
  *(undefined4 *)(this + 0x314) = 0x41a00000;
  *(undefined4 *)(this + 0x318) = 0x42480000;
  *(undefined4 *)(this + 0x31c) = 0x40400000;
  *(undefined4 *)(this + 800) = 0x41200000;
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0x328),&DAT_057517f0,3,auStack_38);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x340),&DAT_05751830,3,auStack_38);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x358),&DAT_05751840,3,auStack_38);
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0x370),&DAT_05751850,3,auStack_38);
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0x388),&DAT_057517e0,3,auStack_38);
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0x3a0),&DAT_05751800,2,auStack_38);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x3b8),&DAT_05751810,2,auStack_38);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x3d0),&DAT_05751820,2,auStack_38);
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 1000),&DAT_057517d0,2,auStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x400));
  std::string::string(asStack_30,"idle_11");
  std::string::string(asStack_28,"idle_12");
  std::string::string(asStack_20,"idle_13");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x418),asStack_30,3,
             auStack_38);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  nop();
  nop();
  std::string::string(asStack_30,"light_11");
  std::string::string(asStack_28,"light_12");
  std::string::string(asStack_20,"light_13");
  std::string::string(asStack_18,"light_14");
  std::string::string(asStack_10,"light_15");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x430),asStack_30,5,
             auStack_38);
  do {
    psVar1 = psVar1 + -8;
    std::string::~string(psVar1);
  } while (psVar1 != asStack_30);
  psVar1 = (string *)&local_8;
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::string(asStack_30,"light_35");
  std::string::string(asStack_28,"light_35");
  std::string::string(asStack_20,"light_35");
  std::string::string(asStack_18,"light_35");
  std::string::string(asStack_10,"light_35");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x448),asStack_30,5,
             auStack_38);
  do {
    psVar1 = psVar1 + -8;
    std::string::~string(psVar1);
  } while (psVar1 != asStack_30);
  psVar1 = (string *)&local_8;
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::string(asStack_30,"idle_21");
  std::string::string(asStack_28,"idle_22");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x460),asStack_30,2,
             auStack_38);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  nop();
  std::string::string(asStack_30,"light_21");
  std::string::string(asStack_28,"light_31");
  std::string::string(asStack_20,"light_32");
  std::string::string(asStack_18,"light_33");
  std::string::string(asStack_10,"light_34");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x478),asStack_30,5,
             auStack_38);
  do {
    psVar1 = psVar1 + -8;
    std::string::~string(psVar1);
  } while (psVar1 != asStack_30);
  psVar1 = (string *)&local_8;
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::string(asStack_30,"light_35");
  std::string::string(asStack_28,"light_35");
  std::string::string(asStack_20,"light_35");
  std::string::string(asStack_18,"light_35");
  std::string::string(asStack_10,"light_35");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x490),asStack_30,5,
             auStack_38);
  do {
    psVar1 = psVar1 + -8;
    std::string::~string(psVar1);
  } while (psVar1 != asStack_30);
  nop();
  nop();
  nop();
  nop();
  nop();
  std::string::string((string *)(this + 0x4a8),"arc");
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DeodarcedarProps::StaticNew() */

DeodarcedarProps * DeodarcedarProps::StaticNew(void)

{
  DeodarcedarProps *this;
  
  this = ::operator_new(0x4b0);
  DeodarcedarProps(this);
  return this;
}


/* DeodarcedarProps::~DeodarcedarProps() */

void __thiscall DeodarcedarProps::~DeodarcedarProps(DeodarcedarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0666e440;
  std::string::~string((string *)(this + 0x4a8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x490));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x478));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x460));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x448));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x430));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x418));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x400));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 1000));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x3d0));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x3b8));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x3a0));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x388));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x370));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x358));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x340));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x328));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* DeodarcedarProps::~DeodarcedarProps() */

void __thiscall DeodarcedarProps::~DeodarcedarProps(DeodarcedarProps *this)

{
  ~DeodarcedarProps(this);
  AK::FreeHook(this);
  return;
}

