// Class: UIPlantPieceImage


/* UIPlantPieceImage::~UIPlantPieceImage() */

void __thiscall UIPlantPieceImage::~UIPlantPieceImage(UIPlantPieceImage *this)

{
  *(undefined ***)this = &PTR_GetClass_06980630;
  std::string::~string((string *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UIPlantPieceImage::~UIPlantPieceImage() */

void __thiscall UIPlantPieceImage::~UIPlantPieceImage(UIPlantPieceImage *this)

{
  ~UIPlantPieceImage(this);
  AK::FreeHook(this);
  return;
}


/* UIPlantPieceImage::UIPlantPieceImage() */

void __thiscall UIPlantPieceImage::UIPlantPieceImage(UIPlantPieceImage *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06980630;
  Set8BytesTo0(this + 0xd8);
  return;
}


/* UIPlantPieceImage::Draw(Sexy::Graphics*) */

void __thiscall UIPlantPieceImage::Draw(UIPlantPieceImage *this,Graphics *param_1)

{
  char cVar1;
  SeedPacketUtils *pSVar2;
  PacketRenderData *pPVar3;
  
  cVar1 = FUN_0547419c((string *)(this + 0xd8));
  if (cVar1 != '\0') {
    return;
  }
  pSVar2 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  pPVar3 = (PacketRenderData *)
           SeedPacketUtils::GetPlantPiecePacketRenderData(pSVar2,(string *)(this + 0xd8));
  pSVar2 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  SeedPacketUtils::DrawPacket(pSVar2,param_1,pPVar3,false,-1,false,false);
  return;
}


/* UIPlantPieceImage::GetPlantRect() */

void UIPlantPieceImage::GetPlantRect(void)

{
  long in_x0;
  SeedPacketUtils *this;
  long lVar1;
  Insets *in_x8;
  
  this = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar1 = SeedPacketUtils::GetPlantPiecePacketRenderData(this,(string *)(in_x0 + 0xd8));
  Sexy::Insets::Insets(in_x8,(Insets *)(lVar1 + 0x20));
  return;
}

