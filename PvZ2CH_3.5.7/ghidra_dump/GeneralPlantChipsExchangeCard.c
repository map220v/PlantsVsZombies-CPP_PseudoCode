// Class: GeneralPlantChipsExchangeCard


/* GeneralPlantChipsExchangeCard::~GeneralPlantChipsExchangeCard() */

void __thiscall
GeneralPlantChipsExchangeCard::~GeneralPlantChipsExchangeCard(GeneralPlantChipsExchangeCard *this)

{
  *(undefined ***)this = &PTR_GetClass_066e8750;
  if (*(long **)(this + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    *(undefined8 *)(this + 0xe8) = 0;
  }
  std::string::~string((string *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GeneralPlantChipsExchangeCard::~GeneralPlantChipsExchangeCard() */

void __thiscall
GeneralPlantChipsExchangeCard::~GeneralPlantChipsExchangeCard(GeneralPlantChipsExchangeCard *this)

{
  ~GeneralPlantChipsExchangeCard(this);
  AK::FreeHook(this);
  return;
}


/* GeneralPlantChipsExchangeCard::GeneralPlantChipsExchangeCard() */

void __thiscall
GeneralPlantChipsExchangeCard::GeneralPlantChipsExchangeCard(GeneralPlantChipsExchangeCard *this)

{
  Sexy::Widget::Widget((Widget *)this);
  this[0xdc] = (GeneralPlantChipsExchangeCard)0x0;
  *(undefined ***)this = &PTR_GetClass_066e8750;
  Set8BytesTo0(this + 0xe0);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  return;
}


/* GeneralPlantChipsExchangeCard::InitView(int, std::string const&, UIGeneralPlantChipsExchange*) */

void __thiscall
GeneralPlantChipsExchangeCard::InitView
          (GeneralPlantChipsExchangeCard *this,int param_1,string *param_2,
          UIGeneralPlantChipsExchange *param_3)

{
  *(int *)(this + 0xd4) = param_1;
  thunk_FUN_05475e00(this + 0xe0,param_2);
  this[0xdc] = (GeneralPlantChipsExchangeCard)0x0;
  *(UIGeneralPlantChipsExchange **)(this + 0xf0) = param_3;
  return;
}


/* GeneralPlantChipsExchangeCard::SelectCard(std::string const&) */

void __thiscall
GeneralPlantChipsExchangeCard::SelectCard(GeneralPlantChipsExchangeCard *this,string *param_1)

{
  GeneralPlantChipsExchangeCard GVar1;
  
  GVar1 = (GeneralPlantChipsExchangeCard)std::operator==((string *)(this + 0xe0),param_1);
  this[0xdc] = GVar1;
  return;
}


/* GeneralPlantChipsExchangeCard::TouchEnded(Sexy::Touch const&) */

void __thiscall
GeneralPlantChipsExchangeCard::TouchEnded(GeneralPlantChipsExchangeCard *this,Touch *param_1)

{
  if ((*(int *)(this + 0xd8) == (int)*(undefined8 *)param_1) &&
     (*(UIGeneralPlantChipsExchange **)(this + 0xf0) != (UIGeneralPlantChipsExchange *)0x0)) {
    UIGeneralPlantChipsExchange::SelectPlant
              (*(UIGeneralPlantChipsExchange **)(this + 0xf0),(string *)(this + 0xe0));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralPlantChipsExchangeCard::Draw(Sexy::Graphics*) */

void __thiscall
GeneralPlantChipsExchangeCard::Draw(GeneralPlantChipsExchangeCard *this,Graphics *param_1)

{
  bool bVar1;
  RenderEffectDefinition *pRVar2;
  RenderEffect *pRVar3;
  Image *pIVar4;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar5;
  DeviceImage *pDVar6;
  code *pcVar7;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe8) == 0) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    pPVar5 = (PacketRenderData *)
             SeedPacketUtils::GetPlantPacketRenderData(this_00,(string *)(this + 0xe0),-1,-1,-1);
    pDVar6 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar5,0,0);
    *(DeviceImage **)(this + 0xe8) = pDVar6;
    SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar6,pPVar5,false,-1,false,false);
  }
  if (this[0x6e] == (GeneralPlantChipsExchangeCard)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xe8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  else {
    pRVar2 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06abfed0);
    pRVar3 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar2);
    pcVar7 = *(code **)(*(long *)pRVar3 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar7)(pRVar3,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_1,pRVar3,1);
    while (bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)asStack_20), bVar1) {
      Sexy::Graphics::DrawImage
                (param_1,*(Image **)(this + 0xe8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
  }
  if (this[0xdc] != (GeneralPlantChipsExchangeCard)0x0) {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abfd18);
    Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

