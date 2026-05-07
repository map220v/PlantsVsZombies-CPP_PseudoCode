// Class: SeedPacketUtils


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::CreateDeviceImageForSeedPacket(PacketRenderData const&, int, int) */

void __thiscall
SeedPacketUtils::CreateDeviceImageForSeedPacket
          (SeedPacketUtils *this,PacketRenderData *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DeviceImage *this_00;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x160);
  Sexy::DeviceImage::DeviceImage(this_00,gLawnApp);
  FUN_044363a8(this_00 + 0x18);
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_1 + 0x34);
  local_10 = 1.0;
  if (0 < param_2) {
    local_10 = (float)param_2 / (float)(iVar1 + iVar2);
  }
  if (param_3 < 1) {
    local_c = 1.0;
  }
  else {
    local_c = (float)param_3 / (float)(iVar3 + iVar4);
  }
  pfVar5 = eastl::min_alt<float>(&local_10,&local_c);
  fVar7 = *pfVar5;
  *(undefined8 *)(this_00 + 0x70) = 0;
  pcVar6 = *(code **)(*(long *)this_00 + 0x130);
  *(int *)(this_00 + 0x38) = (int)(fVar7 * (float)(iVar1 + iVar2));
  *(int *)(this_00 + 0x3c) = (int)(fVar7 * (float)(iVar3 + iVar4));
  (*pcVar6)(this_00,1,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::fillRenderData(PacketRenderData&, Sexy::RtWeakPtr<Sexy::Image>,
   Sexy::RtWeakPtr<Sexy::Image>, Sexy::RtWeakPtr<Sexy::Image>, Sexy::RtWeakPtr<Sexy::Image>,
   Sexy::RtWeakPtr<Sexy::Image>, Sexy::RtWeakPtr<Sexy::Image>, Sexy::RtWeakPtr<Sexy::Image>,
   Sexy::RtWeakPtr<Sexy::Image>, Sexy::RtWeakPtr<Sexy::Image>, Sexy::RtWeakPtr<Sexy::Image>,
   Sexy::RtWeakPtr<Sexy::Image>, Sexy::RtWeakPtr<Sexy::Image>, Sexy::RtWeakPtr<Sexy::Image>,
   Sexy::RtWeakPtr<Sexy::Image>, Sexy::RtWeakPtr<Sexy::Image>) const */

void __thiscall
SeedPacketUtils::fillRenderData
          (undefined8 param_1_00,RtWeakPtr<PowerPropertySheet> *param_1,RtWeakPtr *param_3,
          RtWeakPtr *param_4,RtWeakPtr *param_5,RtWeakPtr *param_6,RtWeakPtr *param_7,
          RtWeakPtr *param_8,RtWeakPtr *param_9,RtWeakPtr *param_10,RtWeakPtr *param_11,
          RtWeakPtr *param_12,RtWeakPtr *param_13,RtWeakPtr *param_14,RtWeakPtr *param_15,
          RtWeakPtr *param_16,RtWeakPtr *param_17)

{
  float fVar1;
  bool bVar2;
  long lVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  RtId aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  param_1[0x178] = (RtWeakPtr<PowerPropertySheet>)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(param_1,param_3);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_1);
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)param_1);
    UIWidget::SetAtlasImageRectToRect(param_1 + 8,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0x18) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    fVar1 = _FUN_04437108;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    UIWidget::ConvertPSDImageOffsetToUISpace((int *)(param_1 + 0x18),(int *)(param_1 + 0x1c),fVar1);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_4);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0x20,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0x30) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0x30),(int *)(param_1 + 0x34),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_16);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_16);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0x38,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0x48) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0x48),(int *)(param_1 + 0x4c),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_5);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0x50,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0x60) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0x60),(int *)(param_1 + 100),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_6);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_6);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0x68,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0x78) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0x78),(int *)(param_1 + 0x7c),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_7);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_7);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0x80,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0x90) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0x90),(int *)(param_1 + 0x94),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_9);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_9);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0xb0,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0xc0) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0xc0),(int *)(param_1 + 0xc4),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_11);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_11);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 200,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0xd8) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0xd8),(int *)(param_1 + 0xdc),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_10);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0xe0,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0xf0) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0xf0),(int *)(param_1 + 0xf4),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_12);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_12);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0xf8,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0x108) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0x108),(int *)(param_1 + 0x10c),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_13);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_13);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0x110,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0x120) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0x120),(int *)(param_1 + 0x124),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_8);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0x98,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0xa8) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0xa8),(int *)(param_1 + 0xac),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_14);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_14);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0x128,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0x138) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0x138),(int *)(param_1 + 0x13c),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_15);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_15);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0x140,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0x150) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0x150),(int *)(param_1 + 0x154),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_17);
  if (bVar2) {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,param_17);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
    UIWidget::SetAtlasImageRectToRect(param_1 + 0x158,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::BaseResource::GetRtId();
    GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,aRStack_18);
    *(undefined8 *)(param_1 + 0x168) = local_10;
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace
              ((int *)(param_1 + 0x168),(int *)(param_1 + 0x16c),_FUN_04437108);
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_20);
  if (bVar2) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(param_1 + 0x170,(RtWeakPtr *)(lVar3 + 0x48));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::GetZombiePacketSize(std::string const&) */

void SeedPacketUtils::GetZombiePacketSize(string *param_1)

{
  char cVar1;
  bool bVar2;
  Point *in_x8;
  string asStack_40 [8];
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Insets aIStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(in_x8);
  cVar1 = FUN_0547419c();
  if (cVar1 == '\0') {
    FUN_05475d88(asStack_40);
  }
  else {
    std::string::string(asStack_40,"IMAGE_UI_PACKETS_");
    nop();
  }
  std::operator+(asStack_40,"READY");
  LawnApp::GetUIImageFromStringId(gLawnApp);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
  if (bVar2) {
    Sexy::Insets::Insets(aIStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_30);
    UIWidget::SetAtlasImageRectToRect(aIStack_18,aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::BaseResource::GetRtId();
    GetImageOffset(&local_28,aRStack_20);
    Sexy::RtId::~RtId((RtId *)aRStack_20);
    UIWidget::ConvertPSDImageOffsetToUISpace(&local_28,&local_24,_FUN_044372a4);
    *(int *)in_x8 = local_28 + local_10;
    *(int *)(in_x8 + 4) = local_24 + local_c;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::DrawPacketNoBackground(Sexy::Graphics*, PacketRenderData const&, bool, int) */

void __thiscall
SeedPacketUtils::DrawPacketNoBackground
          (SeedPacketUtils *this,Graphics *param_1,PacketRenderData *param_2,bool param_3,
          int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  undefined8 uVar7;
  RtWeakPtr *this_01;
  float fVar8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  RtWeakPtr *this_00;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_2);
  if (bVar1) {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this_00 = (RtWeakPtr *)(lVar5 + 0x48);
  }
  else {
    this_00 = (RtWeakPtr *)(param_2 + 0x170);
  }
  this_01 = (RtWeakPtr *)(param_2 + 0x170);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar6,*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),
             (TRect *)(param_2 + 8));
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar6,*(int *)(param_2 + 0xc0),*(int *)(param_2 + 0xc4),
             (TRect *)(param_2 + 0xb0));
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar6,*(int *)(param_2 + 0xf0),*(int *)(param_2 + 0xf4),
             (TRect *)(param_2 + 0xe0));
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar6,*(int *)(param_2 + 0xd8),*(int *)(param_2 + 0xdc),
             (TRect *)(param_2 + 200));
  if (-1 < param_4) {
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar6,*(int *)(param_2 + 0x108),*(int *)(param_2 + 0x10c),
               (TRect *)(param_2 + 0xf8));
    Sexy::StrFormat(L"%d",auStack_28,(ulong)(uint)param_4);
    uVar7 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
    iVar2 = FUN_04436448(0x14);
    iVar3 = FUN_04436448(0x24);
    iVar4 = FUN_04436448(0x46);
    fVar8 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
    FUN_05477b24(auStack_20,auStack_28);
    Sexy::Color::Color(aCStack_18,1);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)iVar2,(float)iVar3,(float)iVar4,fVar8,uVar7,param_1,
               auStack_20,2,0,aCStack_18,0);
    FUN_05476c50(auStack_20);
    FUN_05476c50(auStack_28);
  }
  if (param_3) {
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar6,*(int *)(param_2 + 0x138),*(int *)(param_2 + 0x13c),
               (TRect *)(param_2 + 0x128));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::DrawPacket(Sexy::Graphics*, PacketRenderData const&, bool, int, bool, bool) */

void __thiscall
SeedPacketUtils::DrawPacket
          (SeedPacketUtils *this,Graphics *param_1,PacketRenderData *param_2,bool param_3,
          int param_4,bool param_5,bool param_6)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ResourceInfo *pRVar5;
  long lVar6;
  RtWeakPtr *this_01;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr *)(param_2 + 0x170);
  local_8 = ___stack_chk_guard;
  if (param_3) {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar5,*(int *)(param_2 + 0x78),*(int *)(param_2 + 0x7c),
               (TRect *)(param_2 + 0x68));
  }
  else {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar5,*(int *)(param_2 + 0x30),*(int *)(param_2 + 0x34),
               (TRect *)(param_2 + 0x20));
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_2);
  this_01 = this_00;
  if (bVar1) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    this_01 = (RtWeakPtr *)(lVar6 + 0x48);
  }
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar5,*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),
             (TRect *)(param_2 + 8));
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar5,*(int *)(param_2 + 0xc0),*(int *)(param_2 + 0xc4),
             (TRect *)(param_2 + 0xb0));
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar5,*(int *)(param_2 + 0xf0),*(int *)(param_2 + 0xf4),
             (TRect *)(param_2 + 0xe0));
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar5,*(int *)(param_2 + 0xd8),*(int *)(param_2 + 0xdc),
             (TRect *)(param_2 + 200));
  if (-1 < param_4) {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar5,*(int *)(param_2 + 0x108),*(int *)(param_2 + 0x10c),
               (TRect *)(param_2 + 0xf8));
    Sexy::StrFormat(L"%d",auStack_28,(ulong)(uint)param_4);
    uVar7 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
    iVar2 = FUN_04436448(0x14);
    iVar3 = FUN_04436448(0x24);
    iVar4 = FUN_04436448(0x46);
    fVar8 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
    FUN_05477b24(auStack_20,auStack_28);
    Sexy::Color::Color(aCStack_18,1);
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)(float)iVar2,(float)iVar3,(float)iVar4,fVar8,uVar7,param_1,
               auStack_20,2,0,aCStack_18,0);
    FUN_05476c50(auStack_20);
    FUN_05476c50(auStack_28);
  }
  if (param_5) {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar5,*(int *)(param_2 + 0x150),*(int *)(param_2 + 0x154),
               (TRect *)(param_2 + 0x140));
  }
  if (param_6) {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar5,*(int *)(param_2 + 0x168),*(int *)(param_2 + 0x16c),
               (TRect *)(param_2 + 0x158));
  }
  if (param_3) {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar5,*(int *)(param_2 + 0x138),*(int *)(param_2 + 0x13c),
               (TRect *)(param_2 + 0x128));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SeedPacketUtils::SeedPacketUtils() */

void __thiscall SeedPacketUtils::SeedPacketUtils(SeedPacketUtils *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<SeedPacketUtils>::LazySingleton((LazySingleton<SeedPacketUtils> *)this);
  *(undefined ***)this = &PTR__SeedPacketUtils_0684a140;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onChangeNewRareAvatar);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,bool,Sexy::CBMemberTranslatorX<SeedPacketUtils,void(SeedPacketUtils::*)(int,int,bool)>>
            ((MessageRouter *)puVar1,Message::ChangeNewRareAvatar,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::InvalidateCachedPacketRenderData() */

void __thiscall SeedPacketUtils::InvalidateCachedPacketRenderData(SeedPacketUtils *this)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             ::begin((map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
                      *)(this + 8));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    *(undefined1 *)(lVar2 + 0x188) = 1;
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::onChangeNewRareAvatar(int, int, bool) */

void __thiscall
SeedPacketUtils::onChangeNewRareAvatar(SeedPacketUtils *this,int param_1,int param_2,bool param_3)

{
  map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
  *this_00;
  string *psVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  PlantNameMapperServerID *this_01;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  char *pcVar8;
  InfoClass *pIVar9;
  string *extraout_x1;
  ResourceManager *this_04;
  RtWeakPtr aRStack_58 [8];
  undefined8 local_50;
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  Sexy aSStack_38 [8];
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
  PlantNameMapperServerID::GetTypeForID(this_01,param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
  if (!bVar2) goto LAB_04437cb4;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  lVar5 = FUN_04436340(*(undefined8 *)(lVar5 + 0xb8),*(undefined8 *)(lVar5 + 0xc0));
  if (lVar5 == 0) goto LAB_04437cb4;
  this_00 = (map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             *)(this + 8);
  uVar6 = std::
          map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
          ::begin(this_00);
  uVar7 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_58);
  local_50 = FUN_04437bb4(uVar6,uVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_10);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_10);
  if (!bVar2) goto LAB_04437cb4;
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  iVar4 = PlayerInfo::GetEquipAvatarID(this_03,(string *)(lVar5 + 8));
  NewAvatar::GetAvatarInfoByAvatarId(param_2);
  NewAvatar::GetAvatarInfoByAvatarId(iVar4);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
  if (((iVar4 == param_2) || (!bVar2)) ||
     (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40),
     *(int *)(lVar5 + 0x60) < 1)) {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_48);
    if ((bVar2) &&
       (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48), 0 < *(int *)(lVar5 + 0x60))
       ) {
      bVar2 = false;
      goto LAB_04437e40;
    }
  }
  else {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_48);
    if (bVar2) {
      bVar2 = true;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    }
    else {
      bVar2 = true;
    }
LAB_04437e40:
    Set8BytesTo0(aSStack_38);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    FUN_05475ffc(asStack_30,lVar5 + 0x20,0xe,0xffffffffffffffff);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    bVar3 = std::operator==((string *)(lVar5 + 8),"dazeychain");
    if (bVar3) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      pcVar8 = (char *)FUN_0547429c(lVar5 + 8);
      std::string::string(asStack_18,pcVar8);
      Sexy::Upper((Sexy *)asStack_18,extraout_x1);
      FUN_05474278(asStack_30,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
      std::string::~string((string *)&local_10);
      std::string::~string(asStack_18);
      nop();
    }
    if (bVar2 < param_3) {
      std::operator+(asStack_30,"_NEWRARE_");
      uVar6 = FUN_0547429c(aRStack_20);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 0x60));
      uVar7 = FUN_0547429c(asStack_18);
      Sexy::StrFormat("%s%s%s",(RtWeakPtr<Sexy::SoundResource> *)&local_10,"IMAGE_UI_PACKETS_",uVar6
                      ,uVar7);
      FUN_05474278(aSStack_38,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
      std::string::~string((string *)&local_10);
      std::string::~string(asStack_18);
      std::string::~string((string *)aRStack_20);
    }
    else {
      lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      if ((*(int *)(lVar5 + 0xc) == -1) || (*(int *)(lVar5 + 0xc) == 2)) {
        pcVar8 = "";
      }
      else {
        pcVar8 = "_AVATAR";
      }
      std::operator+(asStack_30,pcVar8);
      uVar6 = FUN_0547429c(asStack_18);
      Sexy::StrFormat("%s%s",(RtWeakPtr<Sexy::SoundResource> *)&local_10,"IMAGE_UI_PACKETS_",uVar6);
      FUN_05474278(aSStack_38,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
      std::string::~string((string *)&local_10);
      std::string::~string(asStack_18);
    }
    this_04 = *(ResourceManager **)(gLawnApp + 0x848);
    Sexy::Upper(aSStack_38,gLawnApp);
    pcVar8 = (char *)FUN_0547429c(asStack_18);
    std::string::string((string *)&local_10,pcVar8);
    pIVar9 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>(this_04,(string *)&local_10)
    ;
    std::string::~string((string *)&local_10);
    nop();
    std::string::~string(asStack_18);
    psVar1 = gLawnApp;
    if (pIVar9 != (InfoClass *)0x0) {
      Sexy::Upper(aSStack_38,(string *)pIVar9);
      pcVar8 = (char *)FUN_0547429c(asStack_18);
      std::string::string((string *)&local_10,pcVar8);
      LawnApp::GetUIImageFromStringId(psVar1);
      std::string::~string((string *)&local_10);
      nop();
      std::string::~string(asStack_18);
      lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar5 + 0x10));
      lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(lVar5 + 0x10),(RtWeakPtr *)aRStack_28);
      lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)(lVar5 + 0x10));
      UIWidget::SetAtlasImageRectToRect(lVar5 + 0x18,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x10));
      Sexy::BaseResource::GetRtId();
      GetImageOffset((RtWeakPtr<Sexy::SoundResource> *)&local_10,asStack_18);
      *(undefined8 *)(lVar5 + 0x28) = local_10;
      Sexy::RtId::~RtId((RtId *)asStack_18);
      lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      UIWidget::ConvertPSDImageOffsetToUISpace((int *)(lVar5 + 0x28),(int *)(lVar5 + 0x2c),1536.0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
    std::string::~string(asStack_30);
    std::string::~string((string *)aSStack_38);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
LAB_04437cb4:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SeedPacketUtils::~SeedPacketUtils() */

void __thiscall SeedPacketUtils::~SeedPacketUtils(SeedPacketUtils *this)

{
  *(undefined ***)this = &PTR__SeedPacketUtils_0684a140;
  std::
  map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
  ::~map((map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
          *)(this + 8));
  Sexy::LazySingleton<SeedPacketUtils>::~LazySingleton((LazySingleton<SeedPacketUtils> *)this);
  return;
}


/* SeedPacketUtils::~SeedPacketUtils() */

void __thiscall SeedPacketUtils::~SeedPacketUtils(SeedPacketUtils *this)

{
  ~SeedPacketUtils(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::GetZombiePacketRenderData(std::string const&, std::string const&, int) */

void __thiscall
SeedPacketUtils::GetZombiePacketRenderData
          (SeedPacketUtils *this,string *param_1,string *param_2,int param_3)

{
  map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
  *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  CachedUIResourcePtr *pCVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  InfoClass *pIVar8;
  long lVar9;
  undefined1 auVar10 [16];
  RtWeakPtr<Sexy::ResourceInfo> *local_180;
  RtWeakPtr<Sexy::ResourceInfo> *local_178;
  RtWeakPtr<Sexy::ResourceInfo> *local_168;
  RtWeakPtr<Sexy::ResourceInfo> *local_160;
  RtWeakPtr<Sexy::ResourceInfo> *local_148;
  RtWeakPtr<Sexy::ResourceInfo> *local_140;
  RtWeakPtr<Sexy::ResourceInfo> *local_138;
  RtWeakPtr<Sexy::ResourceInfo> *local_130;
  RtWeakPtr<Sexy::ResourceInfo> *local_128;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *local_120;
  string asStack_110 [8];
  string asStack_108 [8];
  undefined8 local_100;
  RtWeakPtr aRStack_f8 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [8];
  string asStack_d8 [8];
  string asStack_d0 [8];
  string asStack_c8 [8];
  string asStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_2);
  if (cVar1 == '\0') {
    FUN_05475d88(asStack_110,param_2);
  }
  else {
    std::string::string(asStack_110,"IMAGE_UI_PACKETS_");
    nop();
  }
  lVar3 = FUN_05474184(param_1);
  if (lVar3 == 0) {
    std::string::string(asStack_108,"_EMPTY_PLANT_");
    nop();
  }
  else {
    FUN_031dcc6c(asStack_108,asStack_110,param_1);
  }
  this_00 = (map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             *)(this + 8);
  local_28 = 0;
  local_20 = 0xffffffffffffffff;
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28,asStack_108);
  local_100 = std::
              map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
              ::find(this_00,(RenderDataEx *)&local_28);
  local_18[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_100,(rbtree_iterator *)local_18);
  if ((bVar2) &&
     (lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_100),
     *(char *)(lVar3 + 0x188) == '\0')) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_100);
    lVar3 = lVar3 + 0x10;
    goto LAB_04438da0;
  }
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_f0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_f8);
  if (bVar2) {
    auVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
    Sexy::Upper((Sexy *)(auVar10._0_8_ + 8),auVar10._8_8_);
    uVar6 = FUN_0547429c(asStack_110);
    uVar7 = FUN_0547429c(a_Stack_38);
    Sexy::StrFormat("%s%s",(string *)a_Stack_30,uVar6,uVar7);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_f0,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    pIVar8 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                       (*(ResourceManager **)(gLawnApp + 0x848),(string *)a_Stack_30);
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_f0);
    if (cVar1 != '\0') {
      bVar2 = std::operator==(asStack_110,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
      if (bVar2) {
        pCVar5 = (CachedUIResourcePtr *)&DAT_06b08b38;
      }
      else {
        pCVar5 = (CachedUIResourcePtr *)&DAT_06b080f8;
      }
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar5);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_f0,(RtWeakPtr *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      uVar6 = FUN_0547429c((string *)a_Stack_30);
      Sexy::OutputDebugStrF((wchar_t *)"WARNING: Seed packet image was not found: %s\n",uVar6);
    }
    local_120 = a_Stack_38;
    std::string::~string((string *)a_Stack_30);
    std::string::~string((string *)local_120);
    lVar3 = std::
            map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
            ::operator[](this_00,(RenderDataEx *)&local_28);
    cVar1 = FUN_0547419c(param_2);
    if (cVar1 == '\0') goto LAB_04439164;
    if (pIVar8 == (InfoClass *)0x0) {
LAB_04438e64:
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)a_Stack_f0);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b080d0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_98);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b082f0);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08b10);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07e40);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b089c8);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08148);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07f30);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08368);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08710);
      pCVar5 = (CachedUIResourcePtr *)&DAT_06b08260;
    }
    else {
      lVar9 = *(long *)(*(long *)(pIVar8 + 0x30) + 0x30);
      Sexy::RtName::RtName((RtName *)local_18,L"UI_AlwaysLoaded_Dynamic");
      cVar1 = FUN_04436330(*(undefined4 *)(lVar9 + 0x20),local_18[0] & 0xffffffff);
      Sexy::RtName::~RtName((RtName *)local_18);
      if (cVar1 == '\0') goto LAB_04438e64;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)a_Stack_f0);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08670);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_98);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08b60);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08be8);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08078);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08580);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b083e8);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07eb8);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08210);
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08800);
      pCVar5 = (CachedUIResourcePtr *)&DAT_06b089a0;
    }
    local_120 = a_Stack_38;
    local_128 = aRStack_50;
    local_130 = aRStack_58;
    local_138 = aRStack_60;
    local_140 = aRStack_68;
    local_148 = aRStack_70;
    local_160 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98;
    local_168 = aRStack_88;
    local_178 = aRStack_78;
    local_180 = aRStack_80;
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar5);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (local_120);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_30);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
    fillRenderData(this,lVar3,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90,local_168,local_160,
                   local_180,local_178,local_148,local_140,local_138,local_130,local_128,aRStack_48,
                   aRStack_40,local_120,a_Stack_30,
                   (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_120);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_128);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_130);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_138);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_140);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_148);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_178);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_180);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_160);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_168);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  }
  else {
    lVar3 = std::
            map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
            ::operator[](this_00,(RenderDataEx *)&local_28);
    cVar1 = FUN_0547419c(param_2);
    if (cVar1 != '\0') goto LAB_04438e64;
LAB_04439164:
    local_120 = a_Stack_38;
    if (param_3 == 2) {
      std::operator+(param_2,"LEGEND");
      std::operator+(param_2,"LEGEND_SELECTED");
    }
    else if (param_3 == 0) {
      std::operator+(param_2,"NORMAL");
      std::operator+(param_2,"NORMAL_SELECTED");
    }
    else {
      std::operator+(param_2,"READY");
      std::operator+(param_2,"SELECTED");
    }
    local_128 = (RtWeakPtr<Sexy::ResourceInfo> *)asStack_e0;
    local_140 = (RtWeakPtr<Sexy::ResourceInfo> *)asStack_e8;
    std::operator+(param_2,"LOCKED");
    std::operator+(param_2,"COOLDOWN");
    std::operator+(param_2,"DOTS_LEFT");
    std::operator+(param_2,"DOTS_BOTTOM");
    std::operator+(param_2,"DOTS_RIGHT");
    std::operator+(param_2,"PRICE_TAB");
    std::operator+(param_2,"PRICE_TAB_SELECTED");
    std::operator+(param_2,"SELECT");
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)a_Stack_f0);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_90);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (local_120);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_30);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
    fillRenderData(this,lVar3,(RtWeakPtr<Sexy::SoundResource> *)aRStack_40,
                   (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98,
                   (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_90,
                   aRStack_88,aRStack_80,aRStack_78,aRStack_70,aRStack_68,aRStack_60,aRStack_58,
                   aRStack_50,aRStack_48,local_120,a_Stack_30,
                   (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_120);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::string::~string(asStack_a0);
    std::string::~string(asStack_a8);
    std::string::~string(asStack_b0);
    std::string::~string(asStack_b8);
    std::string::~string(asStack_c0);
    std::string::~string(asStack_c8);
    std::string::~string(asStack_d0);
    std::string::~string(asStack_d8);
    std::string::~string((string *)local_128);
    std::string::~string((string *)local_140);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
LAB_04438da0:
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28);
  std::string::~string(asStack_108);
  std::string::~string(asStack_110);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::GetGridItemPacketRenderData(std::string const&, int, int) */

void __thiscall
SeedPacketUtils::GetGridItemPacketRenderData
          (SeedPacketUtils *this,string *param_1,int param_2,int param_3)

{
  map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
  *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  InfoClass *pIVar5;
  CachedUIResourcePtr *this_01;
  long lVar6;
  undefined1 auVar7 [16];
  RtWeakPtr<Sexy::ResourceInfo> *local_140;
  RtWeakPtr<Sexy::ResourceInfo> *local_130;
  RtWeakPtr<Sexy::ResourceInfo> *local_128;
  RtWeakPtr<Sexy::ResourceInfo> *local_120;
  RtWeakPtr<Sexy::ResourceInfo> *local_110;
  RtWeakPtr<Sexy::SoundResource> *local_108;
  RtWeakPtr<Sexy::ResourceInfo> *local_100;
  RtWeakPtr<Sexy::ResourceInfo> *local_f8;
  RtWeakPtr<Sexy::ResourceInfo> *local_f0;
  RtWeakPtr<Sexy::ResourceInfo> *local_e8;
  RtWeakPtr<Sexy::SoundResource> *local_e0;
  RtWeakPtr<Sexy::ResourceInfo> *local_d8;
  string asStack_c8 [8];
  undefined8 local_c0;
  string asStack_b8 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_b0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a8 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_28 [8];
  int local_20;
  int local_1c;
  ulong local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_05474184(param_1);
  if (lVar3 == 0) {
    std::string::string(asStack_c8,"_EMPTY_PLANT_");
    nop();
  }
  else {
    FUN_05475d88(asStack_c8,param_1);
  }
  this_00 = (map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             *)(this + 8);
  FUN_05475d88(apStack_28,asStack_c8);
  local_20 = param_2;
  local_1c = param_3;
  auVar7 = std::
           map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
           ::find(this_00,(RenderDataEx *)apStack_28);
  local_c0 = auVar7._0_8_;
  Sexy::Upper((Sexy *)param_1,auVar7._8_8_);
  uVar4 = FUN_0547429c((string *)local_18);
  Sexy::StrFormat("%s%s",asStack_b8,"IMAGE_UI_PACKETS_",uVar4);
  std::string::~string((string *)local_18);
  pIVar5 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_b8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_b0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a8);
  local_18[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_c0,(rbtree_iterator *)local_18);
  if ((bVar1) &&
     (lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c0),
     *(char *)(lVar3 + 0x188) == '\0')) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c0);
    lVar3 = lVar3 + 0x10;
    goto LAB_04439aa4;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_a0);
  if (cVar2 != '\0') {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b080f8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    uVar4 = FUN_0547429c(asStack_b8);
    Sexy::OutputDebugStrF((wchar_t *)"WARNING: Seed packet image was not found: %s\n",uVar4);
  }
  lVar3 = std::
          map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
          ::operator[](this_00,(RenderDataEx *)apStack_28);
  if (pIVar5 == (InfoClass *)0x0) {
LAB_04439eac:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)a_Stack_a0);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08318);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_98);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08398);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08b10);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07e40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b089c8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08148);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07f30);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08368);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08710);
    this_01 = (CachedUIResourcePtr *)&DAT_06b08260;
  }
  else {
    lVar6 = *(long *)(*(long *)(pIVar5 + 0x30) + 0x30);
    Sexy::RtName::RtName((RtName *)local_18,L"UI_AlwaysLoaded_Dynamic");
    cVar2 = FUN_04436330(*(undefined4 *)(lVar6 + 0x20),local_18[0] & 0xffffffff);
    Sexy::RtName::~RtName((RtName *)local_18);
    if (cVar2 == '\0') goto LAB_04439eac;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)a_Stack_a0);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b084b8);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_98);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08298);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08be8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08078);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08580);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b083e8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07eb8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08210);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08800);
    this_01 = (CachedUIResourcePtr *)&DAT_06b089a0;
  }
  local_d8 = aRStack_48;
  local_e0 = aRStack_38;
  local_e8 = aRStack_50;
  local_f0 = aRStack_58;
  local_f8 = aRStack_60;
  local_100 = aRStack_68;
  local_108 = aRStack_30;
  local_110 = aRStack_70;
  local_120 = aRStack_80;
  local_128 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98;
  local_130 = aRStack_88;
  local_140 = aRStack_78;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_01);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_e0,(RtWeakPtrBase *)a_Stack_b0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_108,(RtWeakPtrBase *)a_Stack_a8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
  fillRenderData(this,lVar3,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90,local_130,local_128,
                 local_120,local_140,local_110,local_100,local_f8,local_f0,local_e8,local_d8,
                 aRStack_40,local_e0,local_108,(string *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_d8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_e8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_f8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_100);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_140);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_120);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_128);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_130);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
LAB_04439aa4:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b0);
  std::string::~string(asStack_b8);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_28);
  std::string::~string(asStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::GetPlantFoodRenderData() */

void __thiscall SeedPacketUtils::GetPlantFoodRenderData(SeedPacketUtils *this)

{
  map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
  *this_00;
  string *psVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  InfoClass *pIVar5;
  CachedUIResourcePtr *this_01;
  ResourceManager *this_02;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> *local_108;
  RtWeakPtr<Sexy::ResourceInfo> *local_f8;
  RtWeakPtr<Sexy::ResourceInfo> *local_f0;
  RtWeakPtr<Sexy::ResourceInfo> *local_e8;
  RtWeakPtr<Sexy::ResourceInfo> *local_e0;
  RtWeakPtr<Sexy::ResourceInfo> *local_d8;
  RtWeakPtr<Sexy::ResourceInfo> *local_d0;
  RtWeakPtr<Sexy::ResourceInfo> *local_c8;
  RtWeakPtr<Sexy::ResourceInfo> *local_c0;
  RtWeakPtr<Sexy::ResourceInfo> *local_b8;
  undefined8 local_a8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             *)(this + 8);
  local_28 = 0;
  local_20 = 0xffffffffffffffff;
  std::string::string((string *)&local_28,"PlantFoodToUse");
  nop();
  local_a8 = std::
             map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             ::find(this_00,(RenderDataEx *)&local_28);
  local_18[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_a8,(rbtree_iterator *)local_18);
  if ((bVar2) &&
     (lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a8),
     *(char *)(lVar4 + 0x188) == '\0')) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a8);
    lVar4 = lVar4 + 0x10;
    goto LAB_0443a114;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  psVar1 = gLawnApp;
  std::string::string(asStack_30,"IMAGE_UI_PACKETS_POWERBEAN");
  LawnApp::GetUIImageFromStringId(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_30);
  nop();
  this_02 = *(ResourceManager **)(gLawnApp + 0x848);
  std::string::string((string *)local_18,"IMAGE_UI_PACKETS_POWERBEAN");
  pIVar5 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>(this_02,(string *)local_18);
  std::string::~string((string *)local_18);
  nop();
  cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_a0);
  if (cVar3 != '\0') {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b080f8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  }
  lVar4 = std::
          map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
          ::operator[](this_00,(RenderDataEx *)&local_28);
  if (pIVar5 == (InfoClass *)0x0) {
LAB_0443a4f4:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)a_Stack_a0);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b080d0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_98);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b082f0);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08b10);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07e40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b089c8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08148);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07f30);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08368);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08710);
    this_01 = (CachedUIResourcePtr *)&DAT_06b08260;
  }
  else {
    lVar6 = *(long *)(*(long *)(pIVar5 + 0x30) + 0x30);
    Sexy::RtName::RtName((RtName *)local_18,L"UI_AlwaysLoaded_Dynamic");
    cVar3 = FUN_04436330(*(undefined4 *)(lVar6 + 0x20),local_18[0] & 0xffffffff);
    Sexy::RtName::~RtName((RtName *)local_18);
    if (cVar3 == '\0') goto LAB_0443a4f4;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)a_Stack_a0);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08670);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_98);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08b60);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08be8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08078);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08580);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b083e8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07eb8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08210);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08800);
    this_01 = (CachedUIResourcePtr *)&DAT_06b089a0;
  }
  local_b8 = aRStack_40;
  local_c0 = aRStack_48;
  local_c8 = aRStack_50;
  local_d0 = aRStack_58;
  local_d8 = aRStack_60;
  local_e0 = aRStack_68;
  local_e8 = aRStack_78;
  local_f0 = aRStack_80;
  local_f8 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98;
  local_108 = aRStack_70;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_01);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_30);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
  fillRenderData(this,lVar4,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90,aRStack_88,local_f8,local_f0
                 ,local_e8,local_108,local_e0,local_d8,local_d0,local_c8,local_c0,local_b8,
                 a_Stack_38,asStack_30,(RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_b8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_d0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_d8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_e0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_e8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_f8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
LAB_0443a114:
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::GetLevelEditorRenderData(std::string const&) */

void __thiscall SeedPacketUtils::GetLevelEditorRenderData(SeedPacketUtils *this,string *param_1)

{
  map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
  *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  InfoClass *pIVar5;
  CachedUIResourcePtr *this_01;
  long lVar6;
  undefined1 auVar7 [16];
  RtWeakPtr<Sexy::ResourceInfo> *local_140;
  RtWeakPtr<Sexy::ResourceInfo> *local_130;
  RtWeakPtr<Sexy::ResourceInfo> *local_128;
  RtWeakPtr<Sexy::ResourceInfo> *local_120;
  RtWeakPtr<Sexy::ResourceInfo> *local_110;
  RtWeakPtr<Sexy::SoundResource> *local_108;
  RtWeakPtr<Sexy::ResourceInfo> *local_100;
  RtWeakPtr<Sexy::ResourceInfo> *local_f8;
  RtWeakPtr<Sexy::ResourceInfo> *local_f0;
  RtWeakPtr<Sexy::ResourceInfo> *local_e8;
  RtWeakPtr<Sexy::SoundResource> *local_e0;
  RtWeakPtr<Sexy::ResourceInfo> *local_d8;
  string asStack_d0 [8];
  undefined8 local_c8;
  string asStack_c0 [8];
  string asStack_b8 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_b0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a8 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_05474184(param_1);
  if (lVar3 == 0) {
    std::string::string(asStack_d0,"gravestone_egypt");
    nop();
  }
  else {
    FUN_05475d88(asStack_d0,param_1);
  }
  local_28 = 0;
  this_00 = (map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             *)(this + 8);
  local_20 = 0xffffffffffffffff;
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28,asStack_d0);
  local_c8 = std::
             map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             ::find(this_00,(RenderDataEx *)&local_28);
  std::string::string(asStack_c0,"IMAGE_UI_PACKETS_LEVELEDITOR_");
  nop();
  auVar7 = FUN_0547429c(asStack_c0);
  Sexy::Upper((Sexy *)param_1,auVar7._8_8_);
  uVar4 = FUN_0547429c((string *)local_18);
  Sexy::StrFormat("%s%s",asStack_b8,auVar7._0_8_,uVar4);
  std::string::~string((string *)local_18);
  pIVar5 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_b8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_b0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a8);
  local_18[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_c8,(rbtree_iterator *)local_18);
  if ((bVar1) &&
     (lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c8),
     *(char *)(lVar3 + 0x188) == '\0')) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c8);
    lVar3 = lVar3 + 0x10;
    goto LAB_0443a7e0;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_a0);
  if (cVar2 != '\0') {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b080f8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    uVar4 = FUN_0547429c(asStack_b8);
    Sexy::OutputDebugStrF((wchar_t *)"WARNING: Seed packet image was not found: %s\n",uVar4);
  }
  lVar3 = std::
          map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
          ::operator[](this_00,(RenderDataEx *)&local_28);
  if (pIVar5 == (InfoClass *)0x0) {
LAB_0443abf8:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)a_Stack_a0);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08318);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_98);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08398);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08b10);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07e40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b089c8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08148);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07f30);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08368);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08710);
    this_01 = (CachedUIResourcePtr *)&DAT_06b08260;
  }
  else {
    lVar6 = *(long *)(*(long *)(pIVar5 + 0x30) + 0x30);
    Sexy::RtName::RtName((RtName *)local_18,L"UI_AlwaysLoaded_Dynamic");
    cVar2 = FUN_04436330(*(undefined4 *)(lVar6 + 0x20),local_18[0] & 0xffffffff);
    Sexy::RtName::~RtName((RtName *)local_18);
    if (cVar2 == '\0') goto LAB_0443abf8;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)a_Stack_a0);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b084b8);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_98);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08298);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08be8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08078);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08580);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b083e8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07eb8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08210);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08800);
    this_01 = (CachedUIResourcePtr *)&DAT_06b089a0;
  }
  local_d8 = aRStack_48;
  local_e0 = aRStack_38;
  local_e8 = aRStack_50;
  local_f0 = aRStack_58;
  local_f8 = aRStack_60;
  local_100 = aRStack_68;
  local_108 = aRStack_30;
  local_110 = aRStack_70;
  local_120 = aRStack_80;
  local_128 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98;
  local_130 = aRStack_88;
  local_140 = aRStack_78;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_01);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_e0,(RtWeakPtrBase *)a_Stack_b0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_108,(RtWeakPtrBase *)a_Stack_a8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
  fillRenderData(this,lVar3,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90,local_130,local_128,
                 local_120,local_140,local_110,local_100,local_f8,local_f0,local_e8,local_d8,
                 aRStack_40,local_e0,local_108,(string *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_e0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_d8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_e8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_f8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_100);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_140);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_120);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_128);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_130);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
LAB_0443a7e0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b0);
  std::string::~string(asStack_b8);
  std::string::~string(asStack_c0);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28);
  std::string::~string(asStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::GetPlantPiecePacketRenderData(std::string const&) */

void __thiscall
SeedPacketUtils::GetPlantPiecePacketRenderData(SeedPacketUtils *this,string *param_1)

{
  map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
  *this_00;
  bool bVar1;
  char cVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  CachedUIResourcePtr *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *local_c8;
  RtWeakPtr aRStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  undefined8 local_a8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_98 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_90 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_88 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_80 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_78 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_70 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_68 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_60 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_50 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  FUN_031f5e7c(asStack_b8,"PIECE_",param_1);
  lVar4 = FUN_05474184(asStack_b8);
  if (lVar4 == 0) {
    std::string::string(asStack_b0,"_EMPTY_TOOL_");
    nop();
  }
  else {
    FUN_05475d88(asStack_b0,asStack_b8);
  }
  local_18 = 0;
  this_00 = (map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             *)(this + 8);
  local_10 = 0xffffffffffffffff;
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_18,asStack_b0);
  local_a8 = std::
             map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             ::find(this_00,(RenderDataEx *)&local_18);
  local_20 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_a8,(rbtree_iterator *)&local_20);
  if ((bVar1) &&
     (lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a8),
     *(char *)(lVar4 + 0x188) == '\0')) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a8);
    lVar4 = lVar4 + 0x10;
    goto LAB_0443b164;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  lVar4 = FUN_05474184(param_1);
  if (lVar4 != 0) {
    Sexy::Upper((Sexy *)param_1,(string *)a_Stack_28);
    uVar5 = FUN_0547429c((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    Sexy::StrFormat("%s%s",(string *)a_Stack_28,"IMAGE_UI_FRAGMENT_PIECES_PACKETS_",uVar5);
    std::string::~string((string *)&local_20);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
              (*(ResourceManager **)(gLawnApp + 0x848),(string *)a_Stack_28);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_a0);
    if (cVar2 != '\0') {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b080f8);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      uVar5 = FUN_0547429c((string *)a_Stack_28);
      Sexy::OutputDebugStrF((wchar_t *)"WARNING: Tool packet image was not found: %s\n",uVar5);
    }
    local_c8 = a_Stack_28;
    std::string::~string((string *)local_c8);
  }
  local_c8 = a_Stack_28;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_98);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_c0);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
    switch(*(undefined4 *)(lVar4 + 0xd0)) {
    default:
      goto switchD_0443b234_caseD_0;
    case 1:
      this_01 = (CachedUIResourcePtr *)&DAT_06b08490;
      break;
    case 2:
      this_01 = (CachedUIResourcePtr *)&DAT_06b088d8;
      break;
    case 3:
      this_01 = (CachedUIResourcePtr *)&DAT_06b07e18;
      break;
    case 4:
      this_01 = (CachedUIResourcePtr *)&DAT_06b08238;
    }
  }
  else {
switchD_0443b234_caseD_0:
    this_01 = (CachedUIResourcePtr *)&DAT_06b08170;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_01);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_98,(RtWeakPtr *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  lVar4 = std::
          map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
          ::operator[](this_00,(RenderDataEx *)&local_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)a_Stack_a0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)a_Stack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_90);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_88);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_80);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_78);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_70);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_68);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_60);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_58);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_50);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_48);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_30);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (local_c8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_20);
  fillRenderData(this,lVar4,aRStack_40,aRStack_38,a_Stack_90,a_Stack_88,a_Stack_80,a_Stack_78,
                 a_Stack_70,a_Stack_68,a_Stack_60,a_Stack_58,a_Stack_50,a_Stack_48,a_Stack_30,
                 local_c8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
LAB_0443b164:
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_18);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::GetToolPacketRenderData(std::string const&) */

void __thiscall SeedPacketUtils::GetToolPacketRenderData(SeedPacketUtils *this,string *param_1)

{
  map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
  *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  CachedUIResourcePtr *this_01;
  undefined8 uVar4;
  InfoClass *pIVar5;
  string *extraout_x1;
  RtWeakPtr<Sexy::SoundResource> *this_02;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> *local_118;
  RtWeakPtr<Sexy::ResourceInfo> *local_110;
  RtWeakPtr<Sexy::ResourceInfo> *local_108;
  RtWeakPtr<Sexy::ResourceInfo> *local_f0;
  RtWeakPtr<Sexy::ResourceInfo> *local_e8;
  RtWeakPtr<Sexy::ResourceInfo> *local_d8;
  RtWeakPtr<Sexy::ResourceInfo> *local_d0;
  RtWeakPtr<Sexy::ResourceInfo> *local_c8;
  RtWeakPtr<Sexy::ResourceInfo> *local_c0;
  RtWeakPtr<Sexy::ResourceInfo> *local_b8;
  string asStack_b0 [8];
  undefined8 local_a8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_98 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_90 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_88 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_80 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_78 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_05474184(param_1);
  if (lVar3 == 0) {
    std::string::string(asStack_b0,"_EMPTY_TOOL_");
    nop();
  }
  else {
    FUN_05475d88(asStack_b0,param_1);
  }
  this_00 = (map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             *)(this + 8);
  local_28 = 0;
  local_20 = 0xffffffffffffffff;
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28,asStack_b0);
  local_a8 = std::
             map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             ::find(this_00,(RenderDataEx *)&local_28);
  local_18[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_a8,(rbtree_iterator *)local_18);
  if ((bVar1) &&
     (lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a8),
     *(char *)(lVar3 + 0x188) == '\0')) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a8);
    lVar3 = lVar3 + 0x10;
    goto LAB_0443b6e4;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  lVar3 = FUN_05474184(param_1);
  if (lVar3 == 0) {
    lVar3 = std::
            map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
            ::operator[](this_00,(RenderDataEx *)&local_28);
LAB_0443b450:
    this_02 = aRStack_70;
    local_e8 = aRStack_58;
    local_f0 = aRStack_60;
    local_118 = aRStack_68;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(this_02,(RtWeakPtrBase *)a_Stack_a0);
    local_108 = aRStack_48;
    local_110 = aRStack_50;
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08738);
    local_d0 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_90;
    local_d8 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98;
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b081c0);
    local_c0 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_80;
    local_c8 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_88;
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08a70);
    local_b8 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_78;
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07f08);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08418);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_d8);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_d0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_c8);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_c0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_b8);
    this_01 = (CachedUIResourcePtr *)&DAT_06b08530;
  }
  else {
    FUN_05475ffc((Sexy *)a_Stack_38,param_1,5,0xffffffffffffffff);
    Sexy::Upper((Sexy *)a_Stack_38,extraout_x1);
    uVar4 = FUN_0547429c((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18)
    ;
    Sexy::StrFormat("%s%s",(string *)a_Stack_30,"IMAGE_UI_PACKETS_TOOLS_",uVar4);
    std::string::~string((string *)local_18);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    pIVar5 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                       (*(ResourceManager **)(gLawnApp + 0x848),(string *)a_Stack_30);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_a0);
    if (cVar2 != '\0') {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b080f8);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      uVar4 = FUN_0547429c((string *)a_Stack_30);
      Sexy::OutputDebugStrF((wchar_t *)"WARNING: Tool packet image was not found: %s\n",uVar4);
    }
    std::string::~string((string *)a_Stack_30);
    std::string::~string((string *)a_Stack_38);
    lVar3 = std::
            map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
            ::operator[](this_00,(RenderDataEx *)&local_28);
    if (pIVar5 == (InfoClass *)0x0) goto LAB_0443b450;
    lVar6 = *(long *)(*(long *)(pIVar5 + 0x30) + 0x30);
    Sexy::RtName::RtName((RtName *)local_18,L"UI_AlwaysLoaded_Dynamic");
    cVar2 = FUN_04436330(*(undefined4 *)(lVar6 + 0x20),local_18[0] & 0xffffffff);
    Sexy::RtName::~RtName((RtName *)local_18);
    if (cVar2 == '\0') goto LAB_0443b450;
    this_02 = (RtWeakPtr<Sexy::SoundResource> *)a_Stack_90;
    local_e8 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_80;
    local_f0 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98;
    local_118 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_88;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(this_02,(RtWeakPtrBase *)a_Stack_a0);
    local_108 = (RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70;
    local_110 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_78;
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08698);
    local_c8 = aRStack_58;
    local_d0 = aRStack_60;
    local_d8 = aRStack_68;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_f0);
    local_b8 = aRStack_48;
    local_c0 = aRStack_50;
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08b60);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08be8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08078);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08580);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b083e8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07eb8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08210);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08800);
    this_01 = (CachedUIResourcePtr *)&DAT_06b089a0;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this_01);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_30);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
  fillRenderData(this,lVar3,this_02,local_118,local_f0,local_e8,local_110,local_108,local_d8,
                 local_d0,local_c8,local_c0,local_b8,aRStack_40,a_Stack_38,a_Stack_30,
                 (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_b8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_d0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_d8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_e8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_118);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
LAB_0443b6e4:
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28);
  std::string::~string(asStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::GetPowerupPacketRenderData(std::string const&) */

void __thiscall SeedPacketUtils::GetPowerupPacketRenderData(SeedPacketUtils *this,string *param_1)

{
  map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
  *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  InfoClass *pIVar5;
  string *extraout_x1;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> *local_118;
  RtWeakPtr<Sexy::ResourceInfo> *local_110;
  RtWeakPtr<Sexy::ResourceInfo> *local_f8;
  RtWeakPtr<Sexy::ResourceInfo> *local_f0;
  RtWeakPtr<Sexy::ResourceInfo> *local_e8;
  RtWeakPtr<Sexy::ResourceInfo> *local_e0;
  RtWeakPtr<Sexy::ResourceInfo> *local_d8;
  RtWeakPtr<Sexy::ResourceInfo> *local_d0;
  RtWeakPtr<Sexy::ResourceInfo> *local_c8;
  RtWeakPtr<Sexy::ResourceInfo> *local_c0;
  RtWeakPtr<Sexy::ResourceInfo> *local_b8;
  string asStack_b0 [8];
  undefined8 local_a8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_68 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_60 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_50 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_05474184(param_1);
  if (lVar3 == 0) {
    std::string::string(asStack_b0,"_EMPTY_TOOL_");
    nop();
  }
  else {
    FUN_05475d88(asStack_b0,param_1);
  }
  this_00 = (map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             *)(this + 8);
  local_28 = 0;
  local_20 = 0xffffffffffffffff;
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28,asStack_b0);
  local_a8 = std::
             map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             ::find(this_00,(RenderDataEx *)&local_28);
  local_18[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_a8,(rbtree_iterator *)local_18);
  if ((bVar1) &&
     (lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a8),
     *(char *)(lVar3 + 0x188) == '\0')) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a8);
    lVar3 = lVar3 + 0x10;
    goto LAB_0443bad0;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  lVar3 = FUN_05474184(param_1);
  if (lVar3 == 0) {
    lVar3 = std::
            map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
            ::operator[](this_00,(RenderDataEx *)&local_28);
LAB_0443bb50:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)a_Stack_a0);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08738);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b081c0);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08a70);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07f08);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08418);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_68);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_60);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_58);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_50);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_48);
  }
  else {
    FUN_05475ffc((Sexy *)a_Stack_38,param_1,5,0xffffffffffffffff);
    Sexy::Upper((Sexy *)a_Stack_38,extraout_x1);
    uVar4 = FUN_0547429c((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18)
    ;
    Sexy::StrFormat("%s%s",(string *)a_Stack_30,"IMAGE_UI_PACKETS_TOOLS_",uVar4);
    std::string::~string((string *)local_18);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    pIVar5 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                       (*(ResourceManager **)(gLawnApp + 0x848),(string *)a_Stack_30);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_a0);
    if (cVar2 != '\0') {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b080f8);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      uVar4 = FUN_0547429c((string *)a_Stack_30);
      Sexy::OutputDebugStrF((wchar_t *)"WARNING: Powerup packet image was not found: %s\n",uVar4);
    }
    std::string::~string((string *)a_Stack_30);
    std::string::~string((string *)a_Stack_38);
    lVar3 = std::
            map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
            ::operator[](this_00,(RenderDataEx *)&local_28);
    if (pIVar5 == (InfoClass *)0x0) goto LAB_0443bb50;
    lVar6 = *(long *)(*(long *)(pIVar5 + 0x30) + 0x30);
    Sexy::RtName::RtName((RtName *)local_18,L"UI_AlwaysLoaded_Dynamic");
    cVar2 = FUN_04436330(*(undefined4 *)(lVar6 + 0x20),local_18[0] & 0xffffffff);
    Sexy::RtName::~RtName((RtName *)local_18);
    if (cVar2 == '\0') goto LAB_0443bb50;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)a_Stack_a0);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08698);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07df0);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b082c8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08be8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08078);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_68);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_60);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_58);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_50);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_48);
  }
  local_b8 = aRStack_40;
  local_c0 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_48;
  local_c8 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50;
  local_d0 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58;
  local_d8 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60;
  local_e0 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_68;
  local_e8 = aRStack_78;
  local_f0 = aRStack_80;
  local_f8 = aRStack_88;
  local_110 = aRStack_70;
  local_118 = aRStack_90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_40);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_30);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
  fillRenderData(this,lVar3,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98,local_118,local_f8,local_f0,
                 local_e8,local_110,local_e0,local_d8,local_d0,local_c8,local_c0,local_b8,a_Stack_38
                 ,a_Stack_30,
                 (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_b8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_d0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_d8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_e0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_110);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_e8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_f8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_118);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
LAB_0443bad0:
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28);
  std::string::~string(asStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::GetPlantPacketRenderData(std::string const&, int, int, int) */

void __thiscall
SeedPacketUtils::GetPlantPacketRenderData
          (SeedPacketUtils *this,string *param_1,int param_2,int param_3,int param_4)

{
  map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string *psVar5;
  undefined8 uVar6;
  InfoClass *pIVar7;
  PlantType *pPVar8;
  undefined8 uVar9;
  char *pcVar10;
  CachedUIResourcePtr *pCVar11;
  string *extraout_x1;
  uint uVar12;
  long lVar13;
  RtWeakPtr<Sexy::ResourceInfo> *local_168;
  RtWeakPtr<Sexy::ResourceInfo> *local_160;
  RtWeakPtr<Sexy::ResourceInfo> *local_158;
  string asStack_f8 [8];
  undefined8 local_f0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_e8 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_e0 [8];
  string asStack_d8 [8];
  RtWeakPtr aRStack_d0 [8];
  string asStack_c8 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_c0 [8];
  string asStack_b8 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_b0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a8 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined4 local_40 [2];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_28 [8];
  int local_20;
  int local_1c;
  ulong local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_05474184(param_1);
  if (lVar4 == 0) {
    std::string::string(asStack_f8,"_EMPTY_PLANT_");
    nop();
  }
  else {
    FUN_05475d88(asStack_f8,param_1);
  }
  this_00 = (map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             *)(this + 8);
  FUN_05475d88(apStack_28,asStack_f8);
  local_20 = param_2;
  local_1c = param_3;
  local_f0 = std::
             map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
             ::find(this_00,(RenderDataEx *)apStack_28);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_e8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_e0);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  iVar3 = PlayerInfo::GetPlantStarLevel(this_02,param_1,false);
  if (param_2 == -1) {
    param_2 = iVar3;
  }
  std::string::string(asStack_d8,"");
  nop();
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_d0);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
    if ((param_4 == -1) &&
       (param_4 = *(uint *)(lVar4 + 0xd4), *(uint *)(lVar4 + 0xd4) == 0xffffffff)) {
      param_4 = 0;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
    FUN_05475ffc((string *)local_18,lVar4 + 0x20,0xe,0xffffffffffffffff);
    FUN_05474278(asStack_d8,(string *)local_18);
    std::string::~string((string *)local_18);
    bVar1 = std::operator==(param_1,"dazeychain");
    if (bVar1) {
      pcVar10 = (char *)FUN_0547429c(param_1);
      std::string::string((string *)aRStack_30,pcVar10);
      Sexy::Upper((Sexy *)aRStack_30,extraout_x1);
      FUN_05474278(asStack_d8,(string *)local_18);
      std::string::~string((string *)local_18);
      std::string::~string((string *)aRStack_30);
      nop();
    }
  }
  else {
    param_4 = 0;
  }
  if ((param_3 == 2) || (param_3 == -1)) {
    pcVar10 = "";
  }
  else {
    pcVar10 = "_AVATAR";
  }
  std::operator+(asStack_d8,pcVar10);
  uVar6 = FUN_0547429c((string *)local_18);
  Sexy::StrFormat("%s%s",asStack_c8,"IMAGE_UI_PACKETS_",uVar6);
  std::string::~string((string *)local_18);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_d0);
  if (bVar1) {
    pPVar8 = (PlantType *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
    cVar2 = PlantType::IsNewAvatarNewRare(pPVar8);
    if (cVar2 != '\0') {
      std::operator+(asStack_d8,"_NEWRARE_");
      uVar6 = FUN_0547429c((string *)aRStack_38);
      pPVar8 = (PlantType *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0)
      ;
      local_40[0] = PlantType::GetNewAvatarRare(pPVar8);
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_40);
      uVar9 = FUN_0547429c((string *)aRStack_30);
      Sexy::StrFormat("%s%s%s",(string *)local_18,"IMAGE_UI_PACKETS_",uVar6,uVar9);
      FUN_05474278(asStack_c8,(string *)local_18);
      std::string::~string((string *)local_18);
      std::string::~string((string *)aRStack_30);
      std::string::~string((string *)aRStack_38);
    }
  }
  pIVar7 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_c8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_c0);
  std::string::string(asStack_b8,"");
  nop();
  if (pIVar7 == (InfoClass *)0x0) {
LAB_0443c8ec:
    Sexy::StrFormat("IMAGE_UI_PACKETS_P%d",(string *)local_18,(ulong)(uint)param_4);
    FUN_05474278(asStack_b8,(string *)local_18);
    std::string::~string((string *)local_18);
    GetUIResource<Sexy::Image>(asStack_b8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_e0,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    switch(param_2) {
    case 1:
      pCVar11 = (CachedUIResourcePtr *)&DAT_06b08120;
      break;
    case 2:
      pCVar11 = (CachedUIResourcePtr *)&DAT_06b08440;
      break;
    case 3:
      pCVar11 = (CachedUIResourcePtr *)&DAT_06b088b0;
      break;
    case 4:
      pCVar11 = (CachedUIResourcePtr *)&DAT_06b08c60;
      break;
    case 5:
      pCVar11 = (CachedUIResourcePtr *)&DAT_06b08ac0;
      break;
    default:
      goto switchD_0443c9a4_default;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar11);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_e8,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
switchD_0443c9a4_default:
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_b0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_a8);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_d0);
    if (!bVar1) {
      if (pIVar7 != (InfoClass *)0x0) goto LAB_0443c354;
switchD_0443c8e8_caseD_0:
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08648);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      pCVar11 = (CachedUIResourcePtr *)&DAT_06b086c0;
      goto LAB_0443c3d0;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
    uVar12 = *(uint *)(lVar4 + 0xd0);
    if (pIVar7 != (InfoClass *)0x0) goto LAB_0443c77c;
LAB_0443c8cc:
    if (uVar12 < 6) goto LAB_0443c8d4;
  }
  else {
    lVar4 = *(long *)(*(long *)(pIVar7 + 0x30) + 0x30);
    Sexy::RtName::RtName((RtName *)local_18,L"UI_AlwaysLoaded_Dynamic");
    cVar2 = FUN_04436330(*(undefined4 *)(lVar4 + 0x20),local_18[0] & 0xffffffff);
    Sexy::RtName::~RtName((RtName *)local_18);
    if (cVar2 == '\0') goto LAB_0443c8ec;
    Sexy::StrFormat("IMAGE_UI_PACKETS_P%d_DYNAMIC",(string *)local_18,(ulong)(uint)param_4);
    FUN_05474278(asStack_b8,(string *)local_18);
    std::string::~string((string *)local_18);
    GetUIResource<Sexy::Image>(asStack_b8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_e0,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    switch(param_2) {
    case 1:
      pCVar11 = (CachedUIResourcePtr *)&DAT_06b08828;
      break;
    case 2:
      pCVar11 = (CachedUIResourcePtr *)&DAT_06b08a20;
      break;
    case 3:
      pCVar11 = (CachedUIResourcePtr *)&DAT_06b08900;
      break;
    case 4:
      pCVar11 = (CachedUIResourcePtr *)&DAT_06b08508;
      break;
    case 5:
      pCVar11 = (CachedUIResourcePtr *)&DAT_06b08558;
      break;
    default:
      goto switchD_0443c9a4_default;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar11);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_e8,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_b0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_a8);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_d0);
    if (bVar1) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
      uVar12 = *(uint *)(lVar4 + 0xd0);
LAB_0443c77c:
      lVar4 = *(long *)(*(long *)(pIVar7 + 0x30) + 0x30);
      Sexy::RtName::RtName((RtName *)local_18,L"UI_AlwaysLoaded_Dynamic");
      cVar2 = FUN_04436330(*(undefined4 *)(lVar4 + 0x20),local_18[0] & 0xffffffff);
      Sexy::RtName::~RtName((RtName *)local_18);
      if (cVar2 == '\0') goto LAB_0443c8cc;
      switch(uVar12) {
      case 0:
        goto switchD_0443c7e4_caseD_0;
      case 1:
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b087b0);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        pCVar11 = (CachedUIResourcePtr *)&DAT_06b084e0;
        break;
      case 2:
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07f58);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        pCVar11 = (CachedUIResourcePtr *)&DAT_06b08620;
        break;
      case 3:
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08468);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        pCVar11 = (CachedUIResourcePtr *)&DAT_06b08860;
        break;
      case 4:
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08a98);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        pCVar11 = (CachedUIResourcePtr *)&DAT_06b089f0;
        break;
      case 5:
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b080a0);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        pCVar11 = (CachedUIResourcePtr *)&DAT_06b08b98;
        break;
      default:
        goto switchD_0443c7e4_default;
      }
    }
    else {
LAB_0443c354:
      uVar12 = 0;
      lVar4 = *(long *)(*(long *)(pIVar7 + 0x30) + 0x30);
      Sexy::RtName::RtName((RtName *)local_18,L"UI_AlwaysLoaded_Dynamic");
      cVar2 = FUN_04436330(*(undefined4 *)(lVar4 + 0x20),local_18[0] & 0xffffffff);
      Sexy::RtName::~RtName((RtName *)local_18);
      if (cVar2 == '\0') {
LAB_0443c8d4:
        switch(uVar12) {
        default:
          goto switchD_0443c8e8_caseD_0;
        case 1:
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08028);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18)
          ;
          pCVar11 = (CachedUIResourcePtr *)&DAT_06b08950;
          break;
        case 2:
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08050);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18)
          ;
          pCVar11 = (CachedUIResourcePtr *)&DAT_06b08760;
          break;
        case 3:
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b085d0);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18)
          ;
          pCVar11 = (CachedUIResourcePtr *)&DAT_06b07fb0;
          break;
        case 4:
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08788);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18)
          ;
          pCVar11 = (CachedUIResourcePtr *)&DAT_06b08c10;
          break;
        case 5:
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08bc0);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18)
          ;
          pCVar11 = (CachedUIResourcePtr *)&DAT_06b08ae8;
        }
      }
      else {
switchD_0443c7e4_caseD_0:
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b081e8);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b0,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        pCVar11 = (CachedUIResourcePtr *)&DAT_06b085a8;
      }
    }
LAB_0443c3d0:
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar11);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a8,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  }
switchD_0443c7e4_default:
  local_18[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_f0,(rbtree_iterator *)local_18);
  if ((bVar1) &&
     (lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0),
     *(char *)(lVar4 + 0x188) == '\0')) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_e8);
    if (bVar1) {
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)a_Stack_e8);
      UIWidget::SetAtlasImageRectToRect(lVar4 + 0x150,(string *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_e8);
      Sexy::BaseResource::GetRtId();
      GetImageOffset((string *)local_18,(RtId *)aRStack_30);
      *(ulong *)(lVar4 + 0x160) = local_18[0];
      Sexy::RtId::~RtId((RtId *)aRStack_30);
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0);
      UIWidget::ConvertPSDImageOffsetToUISpace
                ((int *)(lVar4 + 0x160),(int *)(lVar4 + 0x164),_FUN_0443d350);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_e0);
      if (!bVar1) goto LAB_0443c808;
LAB_0443cf28:
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)a_Stack_e0);
      UIWidget::SetAtlasImageRectToRect(lVar4 + 0x168,(string *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_e0);
      Sexy::BaseResource::GetRtId();
      GetImageOffset((string *)local_18,(RtId *)aRStack_30);
      *(ulong *)(lVar4 + 0x178) = local_18[0];
      Sexy::RtId::~RtId((RtId *)aRStack_30);
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0);
      UIWidget::ConvertPSDImageOffsetToUISpace
                ((int *)(lVar4 + 0x178),(int *)(lVar4 + 0x17c),_FUN_0443d350);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_c0);
      if (bVar1) {
LAB_0443cdf0:
        lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)a_Stack_c0);
        UIWidget::SetAtlasImageRectToRect(lVar4 + 0x48,(string *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_c0);
        Sexy::BaseResource::GetRtId();
        GetImageOffset((string *)local_18,(RtId *)aRStack_30);
        *(ulong *)(lVar4 + 0x58) = local_18[0];
        Sexy::RtId::~RtId((RtId *)aRStack_30);
        lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0);
        UIWidget::ConvertPSDImageOffsetToUISpace
                  ((int *)(lVar4 + 0x58),(int *)(lVar4 + 0x5c),_FUN_0443d350);
      }
    }
    else {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_e0);
      if (bVar1) goto LAB_0443cf28;
LAB_0443c808:
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_c0);
      if (bVar1) goto LAB_0443cdf0;
    }
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0);
    lVar4 = lVar4 + 0x10;
    goto LAB_0443c824;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_d0);
  if (bVar1) {
    LawnApp::GetUIImageFromStringId(gLawnApp);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_a0);
    if (cVar2 != '\0') {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b080f8);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_a0,(RtWeakPtr *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      uVar6 = FUN_0547429c(asStack_c8);
      Sexy::OutputDebugStrF((wchar_t *)"WARNING: Seed packet image was not found: %s\n",uVar6);
    }
  }
  lVar4 = std::
          map<RenderDataEx,PacketRenderData,std::less<RenderDataEx>,std::allocator<std::pair<RenderDataEx_const,PacketRenderData>>>
          ::operator[](this_00,(RenderDataEx *)apStack_28);
  if (pIVar7 == (InfoClass *)0x0) {
LAB_0443c9a8:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)a_Stack_a0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)a_Stack_b0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_98);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)a_Stack_a8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08b10);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07e40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b089c8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08148);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07f30);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08368);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08710);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08260);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)a_Stack_e8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)a_Stack_c0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)a_Stack_e0);
    fillRenderData(this,lVar4,aRStack_90,aRStack_88,a_Stack_98,aRStack_80,aRStack_78,aRStack_70,
                   aRStack_68,aRStack_60,aRStack_58,aRStack_50,aRStack_48,
                   (RtWeakPtr<Sexy::ResourceInfo> *)local_40,aRStack_38,aRStack_30,
                   (string *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  else {
    lVar13 = *(long *)(*(long *)(pIVar7 + 0x30) + 0x30);
    Sexy::RtName::RtName((RtName *)local_18,L"UI_AlwaysLoaded_Dynamic");
    cVar2 = FUN_04436330(*(undefined4 *)(lVar13 + 0x20),local_18[0] & 0xffffffff);
    Sexy::RtName::~RtName((RtName *)local_18);
    if (cVar2 == '\0') goto LAB_0443c9a8;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)a_Stack_a0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)a_Stack_b0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_98);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)a_Stack_a8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08be8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08078);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08580);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b083e8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07eb8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08210);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b08800);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b089a0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)a_Stack_e8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)a_Stack_c0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)a_Stack_e0);
    fillRenderData(this,lVar4,aRStack_90,aRStack_88,a_Stack_98,aRStack_80,aRStack_78,aRStack_70,
                   aRStack_68,aRStack_60,aRStack_58,aRStack_50,aRStack_48,
                   (RtWeakPtr<Sexy::ResourceInfo> *)local_40,aRStack_38,aRStack_30,
                   (string *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  local_158 = (RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80;
  local_160 = (RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98;
  local_168 = (RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_158);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_160);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_168);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
LAB_0443c824:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b0);
  std::string::~string(asStack_b8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_c0);
  std::string::~string(asStack_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
  std::string::~string(asStack_d8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_e0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_e8);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_28);
  std::string::~string(asStack_f8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::DrawPacketToDeviceImage(Sexy::DeviceImage*, PacketRenderData const&, bool, int,
   bool, bool) */

void __thiscall
SeedPacketUtils::DrawPacketToDeviceImage
          (SeedPacketUtils *this,DeviceImage *param_1,PacketRenderData *param_2,bool param_3,
          int param_4,bool param_5,bool param_6)

{
  Graphics3D *pGVar1;
  float *pfVar2;
  float local_10c;
  float local_108 [4];
  SexyTransform2D aSStack_f8 [40];
  Graphics aGStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Graphics::Graphics(aGStack_d0,(Image *)param_1);
  pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_f8);
  Sexy::Graphics3D::PushTransform(pGVar1,(SexyMatrix3 *)aSStack_f8,false);
  pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
  Sexy::Insets::Insets((Insets *)local_108,0,0,0,0);
  Sexy::Graphics3D::ClearColorBuffer(pGVar1,(Color *)local_108);
  Sexy::Color::Color((Color *)local_108,1);
  Sexy::Graphics::SetColor(aGStack_d0,(Color *)local_108);
  local_10c = (float)*(int *)(param_1 + 0x38) /
              (float)(*(int *)(param_2 + 0x28) + *(int *)(param_2 + 0x30));
  local_108[0] = (float)*(int *)(param_1 + 0x3c) /
                 (float)(*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x34));
  pfVar2 = eastl::min_alt<float>(&local_10c,local_108);
  Sexy::Graphics::SetScale(aGStack_d0,*pfVar2,*pfVar2,0.0,0.0);
  DrawPacket(this,aGStack_d0,param_2,param_3,param_4,param_5,param_6);
  pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
  Sexy::Graphics3D::PopTransform(pGVar1);
  Sexy::Graphics::~Graphics(aGStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacketUtils::DrawPacketToDeviceImageNoBackground(Sexy::DeviceImage*, PacketRenderData const&,
   bool, int) */

void __thiscall
SeedPacketUtils::DrawPacketToDeviceImageNoBackground
          (SeedPacketUtils *this,DeviceImage *param_1,PacketRenderData *param_2,bool param_3,
          int param_4)

{
  Graphics3D *pGVar1;
  float *pfVar2;
  float local_10c;
  float local_108 [4];
  SexyTransform2D aSStack_f8 [40];
  Graphics aGStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Graphics::Graphics(aGStack_d0,(Image *)param_1);
  pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_f8);
  Sexy::Graphics3D::PushTransform(pGVar1,(SexyMatrix3 *)aSStack_f8,false);
  pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
  Sexy::Insets::Insets((Insets *)local_108,0,0,0,0);
  Sexy::Graphics3D::ClearColorBuffer(pGVar1,(Color *)local_108);
  Sexy::Color::Color((Color *)local_108,1);
  Sexy::Graphics::SetColor(aGStack_d0,(Color *)local_108);
  local_10c = (float)*(int *)(param_1 + 0x38) /
              (float)(*(int *)(param_2 + 0x28) + *(int *)(param_2 + 0x30));
  local_108[0] = (float)*(int *)(param_1 + 0x3c) /
                 (float)(*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x34));
  pfVar2 = eastl::min_alt<float>(&local_10c,local_108);
  Sexy::Graphics::SetScale(aGStack_d0,*pfVar2,*pfVar2,0.0,0.0);
  DrawPacketNoBackground(this,aGStack_d0,param_2,param_3,param_4);
  pGVar1 = (Graphics3D *)Sexy::Graphics::Get3D(aGStack_d0);
  Sexy::Graphics3D::PopTransform(pGVar1);
  Sexy::Graphics::~Graphics(aGStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

