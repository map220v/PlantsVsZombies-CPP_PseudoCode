// Class: LoveTwoSun


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoveTwoSun::StaticClassInit() */

void LoveTwoSun::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LoveTwoSunDropItem");
    (*pcVar3)(plVar2,asStack_10,FUN_040de668,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LoveTwoSun");
    (*pcVar3)(plVar2,asStack_10,FUN_040de8d4,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LoveTwoSun::StaticGetClass() */

long * LoveTwoSun::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"LoveTwoSun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LoveTwoSun::GetClass() const */

long * LoveTwoSun::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"LoveTwoSun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoveTwoSun::PlayDance() */

void __thiscall LoveTwoSun::PlayDance(LoveTwoSun *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"animation");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LoveTwoSun::SetBoardPos(Sexy::SexyVector3 const&) */

void __thiscall LoveTwoSun::SetBoardPos(LoveTwoSun *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x10c),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoveTwoSun::DropSun(LoveTwoSun::LoveTwoSunDropItem const&) */

void __thiscall LoveTwoSun::DropSun(LoveTwoSun *this,LoveTwoSunDropItem *param_1)

{
  ResourceInfo *this_00;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x10));
  if (this_00 != (ResourceInfo *)0x0) {
    EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
    Collectable::SetMotionNewtonian
              ((Collectable *)this_00,(SexyVector3 *)aVStack_18,(SexyVector3 *)(param_1 + 4),true);
    Collectable::StartExpirationTimerAfterMotion((Collectable *)this_00);
    Collectable::StartCollectAfterMotion((Collectable *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LoveTwoSun::LoveTwoSun() */

void __thiscall LoveTwoSun::LoveTwoSun(LoveTwoSun *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067dd050;
  DVec3::DVec3((DVec3 *)(this + 0x10c));
  Set8BytesTo0(this + 0x118);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  this[0x109] = (LoveTwoSun)0x0;
  return;
}


/* LoveTwoSun::StaticNew() */

LoveTwoSun * LoveTwoSun::StaticNew(void)

{
  LoveTwoSun *this;
  
  this = ::operator_new(0x138);
  LoveTwoSun(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoveTwoSun::CreateSun(Sexy::SexyVector3) */

void LoveTwoSun::CreateSun
               (RtWeakPtr<Sexy::SoundResource> *param_1,float param_2,float param_3,
               undefined4 param_4,long param_5)

{
  CollectableSun *pCVar1;
  float local_20;
  float local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_20 = *(float *)(param_5 + 0x10c) + param_2;
  local_1c = *(float *)(param_5 + 0x110) + param_3;
  local_8 = ___stack_chk_guard;
  local_18 = param_4;
  pCVar1 = (CollectableSun *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
  (**(code **)(*(long *)pCVar1 + 0x78))(pCVar1,&local_20);
  MessageRouter::Post<CollectableSun*,CollectableSun*>
            ((MessageRouter *)gMessageRouter,Message::SunProducedByPlant,pCVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* LoveTwoSun::~LoveTwoSun() */

void __thiscall LoveTwoSun::~LoveTwoSun(LoveTwoSun *this)

{
  *(undefined ***)this = &PTR_GetClass_067dd050;
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  ~vector((vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>> *)
          (this + 0x120));
  std::string::~string((string *)(this + 0x118));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* LoveTwoSun::~LoveTwoSun() */

void __thiscall LoveTwoSun::~LoveTwoSun(LoveTwoSun *this)

{
  ~LoveTwoSun(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoveTwoSun::BeginDrop() */

void __thiscall LoveTwoSun::BeginDrop(LoveTwoSun *this)

{
  vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>> *this_00;
  float fVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  long local_8;
  
  this[0x109] = (LoveTwoSun)0x1;
  local_8 = ___stack_chk_guard;
  this_00 = (vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>> *
            )(this + 0x120);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,50.0,138.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,90.0,120.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.1,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,27.0,138.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,60.0,25.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1,(SexyVector3 *)aRStack_30,(RtWeakPtr *)a_Stack_38
            );
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,4.0,138.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,-200.0,5.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.1,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,-19.0,138.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,-85.0,140.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.2,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,-42.0,138.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,170.0,160.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.3,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,-26.0,121.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,-220.0,-110.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.4,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,-8.0,112.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,0.0,130.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.2,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,10.0,100.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,250.0,95.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.3,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,28.0,86.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,-150.0,-170.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.4,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,37.0,68.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,150.0,-50.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.5,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,27.0,50.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,155.0,120.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.6,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,6.0,41.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,90.0,-70.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.7,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,-14.0,49.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,160.0,20.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.6,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_20,-30.0,63.0,100.0);
  CreateSun(aRStack_30,local_20,local_1c,local_18,this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  fVar1 = (float)PVZ_T();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_30,-50.0,0.0,-300.0);
  LoveTwoSunDropItem::LoveTwoSunDropItem
            ((LoveTwoSunDropItem *)&local_20,fVar1 + 0.5,(SexyVector3 *)aRStack_30,
             (RtWeakPtr *)a_Stack_38);
  std::vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
  push_back(this_00,(LoveTwoSunDropItem *)&local_20);
  PVPZoneData::~PVPZoneData((PVPZoneData *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LoveTwoSun::onAnimStopped(std::string const&) */

void __thiscall LoveTwoSun::onAnimStopped(LoveTwoSun *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"animation");
  if (!bVar1) {
    return;
  }
  BeginDrop(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LoveTwoSun::onUpdate() */

void __thiscall LoveTwoSun::onUpdate(LoveTwoSun *this)

{
  vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>> *this_00;
  char cVar1;
  bool bVar2;
  PopAnimRig *this_01;
  float *pfVar3;
  LoveTwoSunDropItem *pLVar4;
  float fVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  if (this[0x109] != (LoveTwoSun)0x0) {
    this_00 = (vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>
               *)(this + 0x120);
    cVar1 = std::
            vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>::
            empty(this_00);
    if (cVar1 == '\0') {
      this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
      while( true ) {
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (!bVar2) break;
        fVar5 = (float)PVZ_T();
        pfVar3 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if (*pfVar3 < fVar5) {
          do {
            cVar1 = PopAnimRig::GetIsDisabled(this_01);
            if (cVar1 == '\0') {
              PopAnimRig::SetDisabled(this_01,true);
            }
            pLVar4 = (LoveTwoSunDropItem *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
            DropSun(this,pLVar4);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_10,(__normal_iterator *)&local_18);
            local_18 = std::
                       vector<LoveTwoSun::LoveTwoSunDropItem,std::allocator<LoveTwoSun::LoveTwoSunDropItem>>
                       ::erase(this_00,local_10);
            local_10 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)this_00);
            bVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
            if (!bVar2) goto LAB_040e04e4;
            fVar5 = (float)PVZ_T();
            pfVar3 = (float *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)&local_18);
          } while (*pfVar3 < fVar5);
        }
        FUN_040dd56c((__normal_iterator *)&local_18);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
LAB_040e04e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

