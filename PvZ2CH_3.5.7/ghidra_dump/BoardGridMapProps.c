// Class: BoardGridMapProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardGridMapProps::StaticClassInit() */

void BoardGridMapProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardGridMapProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0369dea0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardGridMapProps::StaticGetClass() */

long * BoardGridMapProps::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"BoardGridMapProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardGridMapProps::GetClass() const */

long * BoardGridMapProps::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"BoardGridMapProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardGridMapProps::At(unsigned long, unsigned long) const */

undefined4 __thiscall BoardGridMapProps::At(BoardGridMapProps *this,ulong param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  if (param_1 < (ulong)(long)iVar1) {
    iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    if (param_2 < (ulong)(long)iVar1) {
      puVar2 = (undefined8 *)FUN_0369d864(*(undefined8 *)(this + 0x10),param_1);
      puVar3 = (undefined4 *)FUN_0369d870(*puVar2,param_2);
      return *puVar3;
    }
  }
  return 0;
}


/* BoardGridMapProps::Set(unsigned long, unsigned long, unsigned int) */

void __thiscall
BoardGridMapProps::Set(BoardGridMapProps *this,ulong param_1,ulong param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  if ((param_1 < (ulong)(long)iVar1) &&
     (iVar1 = BoardConstants::NUMBER_OF_COLUMNS(), param_2 < (ulong)(long)iVar1)) {
    puVar2 = (undefined8 *)FUN_0369d878(*(undefined8 *)(this + 0x10),param_1);
    puVar3 = (uint *)FUN_0369d884(*puVar2,param_2);
    *puVar3 = param_3;
    return;
  }
  return;
}


/* BoardGridMapProps::Apply(Sexy::Delegate2<int, int>) const */

void __thiscall BoardGridMapProps::Apply(BoardGridMapProps *this,char *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar3 = 0;
  iVar1 = FUN_0369d82c(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  if (iVar1 != 0) {
    iVar1 = BoardConstants::NUMBER_OF_ROWS();
    pcVar4 = (char *)0x0;
    if (0 < iVar1) {
      do {
        uVar2 = 0;
        iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
        if (0 < iVar1) {
          do {
            iVar1 = At(this,uVar3,uVar2);
            if (iVar1 != 0) {
              Sexy::Delegate2<char_const*,char_const*>::operator()(param_2,pcVar4);
            }
            uVar2 = uVar2 + 1;
            iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
          } while ((int)uVar2 < iVar1);
        }
        uVar3 = uVar3 + 1;
        iVar1 = BoardConstants::NUMBER_OF_ROWS();
        pcVar4 = (char *)(uVar3 & 0xffffffff);
      } while ((int)uVar3 < iVar1);
    }
  }
  return;
}


/* BoardGridMapProps::Apply(std::function<void (int, int)>) const */

void __thiscall BoardGridMapProps::Apply(BoardGridMapProps *this,function<void(int,int)> *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  uVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = 0;
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
      if (0 < iVar1) {
        do {
          iVar1 = At(this,uVar3,uVar2);
          if (iVar1 != 0) {
            std::function<void(int,int)>::operator()(param_2,(int)uVar4,(int)uVar2);
          }
          uVar2 = uVar2 + 1;
          iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
        } while ((int)uVar2 < iVar1);
      }
      uVar3 = uVar3 + 1;
      iVar1 = BoardConstants::NUMBER_OF_ROWS();
      uVar4 = uVar3 & 0xffffffff;
    } while ((int)uVar3 < iVar1);
  }
  return;
}


/* BoardGridMapProps::~BoardGridMapProps() */

void __thiscall BoardGridMapProps::~BoardGridMapProps(BoardGridMapProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667f050;
  std::
  vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  ::~vector((vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
             *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* BoardGridMapProps::~BoardGridMapProps() */

void __thiscall BoardGridMapProps::~BoardGridMapProps(BoardGridMapProps *this)

{
  ~BoardGridMapProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardGridMapProps::BoardGridMapProps() */

void __thiscall BoardGridMapProps::BoardGridMapProps(BoardGridMapProps *this)

{
  int iVar1;
  int iVar2;
  vector<unsigned_int,std::allocator<unsigned_int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0667f050;
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((ulong)avStack_20,(uint *)(long)iVar2,(allocator *)&k_EmptyEntry);
  std::
  vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  ::vector((ulong)(this + 0x10),(vector *)(long)iVar1,(allocator *)avStack_20);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardGridMapProps::StaticNew() */

BoardGridMapProps * BoardGridMapProps::StaticNew(void)

{
  BoardGridMapProps *this;
  
  this = ::operator_new(0x28);
  BoardGridMapProps(this);
  return this;
}


/* BoardGridMapProps::CopyFrom(BoardGridMapProps const&) */

void __thiscall BoardGridMapProps::CopyFrom(BoardGridMapProps *this,BoardGridMapProps *param_1)

{
  std::
  vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  ::operator=((vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
               *)(this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardGridMapProps::onPostLoad() */

void __thiscall BoardGridMapProps::onPostLoad(BoardGridMapProps *this)

{
  vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  vector<unsigned_int,std::allocator<unsigned_int>> *this_01;
  uint local_30 [2];
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  local_28 = (ulong)local_28._4_4_ << 0x20;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((ulong)local_20,(uint *)(long)iVar3,(allocator *)&local_28);
  std::
  vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  ::resize(this_00,(long)iVar2,(vector *)local_20);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)this_00);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20)
        , bVar1) {
    this_01 = (vector<unsigned_int,std::allocator<unsigned_int>> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    local_30[0] = 0;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::resize(this_01,(long)iVar2,local_30);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

