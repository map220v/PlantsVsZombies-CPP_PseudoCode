// Class: ZombossSteamRestActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRestActionDefinition::StaticClassInit() */

void ZombossSteamRestActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamRestActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_03c49fe0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamRestActionDefinition::StaticGetClass() */

long * ZombossSteamRestActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamRestActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamRestActionDefinition::GetClass() const */

long * ZombossSteamRestActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamRestActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamRestActionDefinition::ZombossSteamRestActionDefinition() */

void __thiscall
ZombossSteamRestActionDefinition::ZombossSteamRestActionDefinition
          (ZombossSteamRestActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06752e30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  *(undefined4 *)(this + 0x40) = 0;
  Sexy::Point::Point((Point *)(this + 0x44));
  return;
}


/* ZombossSteamRestActionDefinition::StaticNew() */

ZombossSteamRestActionDefinition * ZombossSteamRestActionDefinition::StaticNew(void)

{
  ZombossSteamRestActionDefinition *this;
  
  this = ::operator_new(0x50);
  ZombossSteamRestActionDefinition(this);
  return this;
}


/* ZombossSteamRestActionDefinition::~ZombossSteamRestActionDefinition() */

void __thiscall
ZombossSteamRestActionDefinition::~ZombossSteamRestActionDefinition
          (ZombossSteamRestActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06752e30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossSteamRestActionDefinition::~ZombossSteamRestActionDefinition() */

void __thiscall
ZombossSteamRestActionDefinition::~ZombossSteamRestActionDefinition
          (ZombossSteamRestActionDefinition *this)

{
  ~ZombossSteamRestActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRestActionDefinition::GetRandomPoint(Sexy::Point const&) const */

void ZombossSteamRestActionDefinition::GetRandomPoint(Point *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TPoint *pTVar4;
  int *in_x1;
  Point *in_x8;
  int iVar5;
  Point aPStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  iVar5 = 1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  if (1 < iVar1) {
    do {
      if (in_x1[1] != iVar5) {
        Sexy::Point::Point(aPStack_28,*in_x1,iVar5);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20,aPStack_28);
      }
      iVar5 = iVar5 + 1;
      iVar1 = BoardConstants::NUMBER_OF_ROWS();
    } while (iVar5 < iVar1);
  }
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar2,uVar3);
  pTVar4 = (TPoint *)FUN_03c3ed54(local_20[0],0);
  Sexy::Point::Point(in_x8,pTVar4);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03c4fa00 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSteamRestActionDefinition::GenerateRandomJump(ZombieWithActions*, Sexy::Point const&,
   std::vector<Sexy::RtWeakPtr<ZombieActionHandler>,
   std::allocator<Sexy::RtWeakPtr<ZombieActionHandler> > >&) const */

void ZombossSteamRestActionDefinition::GenerateRandomJump
               (ZombieWithActions *param_1,Point *param_2,vector *param_3)

{
  ZombieWithActions *pZVar1;
  ZombossSteamJumpActionHandler *this;
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  *in_x3;
  Point *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = (ZombieWithActions *)
           std::
           vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
           ::empty(in_x3);
  if (((ulong)pZVar1 & 0xff) == 0) {
    GetRandomPoint((Point *)param_1);
  }
  else {
    Sexy::Point::Point(in_x8,(TPoint *)param_3);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(param_1 + 0x38));
  this = ZombieWithActions::QueueAction<ZombossSteamJumpActionHandler>(pZVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ZombossJumpActionHandler::SetJumpTarget((ZombossJumpActionHandler *)this,in_x8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::push_back(in_x3,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03c4fdb0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSteamRestActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossSteamRestActionDefinition::TryStartAction
          (ZombossSteamRestActionDefinition *this,RtWeakPtrBase *param_2,Point *param_3)

{
  bool bVar1;
  ZombossSteamRestActionHandler *pZVar2;
  RtWeakPtr *pRVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar4 = 0;
  Sexy::Rand(*(int *)(this + 0x40));
  Sexy::Point::Point((Point *)&local_38,(TPoint *)(this + 0x44));
  if (-1 < (int)this) {
    do {
      iVar4 = iVar4 + 1;
      GenerateRandomJump((ZombieWithActions *)this,param_3,(vector *)&local_38);
      local_38 = local_28;
    } while (iVar4 <= (int)this);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_28,param_2);
  pZVar2 = ZombieWithActions::QueueAction<ZombossSteamRestActionHandler>
                     ((ZombieWithActions *)this,(RtWeakPtr<Sexy::SoundResource> *)&local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pRVar3 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    std::
    vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
    ::push_back((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
                 *)(pZVar2 + 0x28),pRVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::
  vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
  ::~vector((vector<Sexy::RtWeakPtr<ZombieActionHandler>,std::allocator<Sexy::RtWeakPtr<ZombieActionHandler>>>
             *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}

