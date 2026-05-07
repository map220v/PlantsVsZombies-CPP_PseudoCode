// Class: Sexy::PIEffectDef


/* Sexy::PIEffectDef::PIEffectDef() */

void __thiscall Sexy::PIEffectDef::PIEffectDef(PIEffectDef *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x50));
  this[0x80] = (PIEffectDef)0x0;
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 4) = 0x3f800000;
  return;
}


/* Sexy::PIEffectDef::~PIEffectDef() */

void __thiscall Sexy::PIEffectDef::~PIEffectDef(PIEffectDef *this)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  PIEmitter *this_00;
  PITexture *this_01;
  undefined8 uVar5;
  
  lVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 8);
    iVar1 = FUN_053b9aec(uVar5,*(undefined8 *)(this + 0x10));
    lVar3 = lVar4;
    do {
      lVar4 = lVar3 + 1;
      if (iVar1 <= (int)lVar3) {
        uVar5 = *(undefined8 *)(this + 0x20);
        lVar4 = 0;
        iVar1 = FUN_053b9b00(uVar5,*(undefined8 *)(this + 0x28));
        goto LAB_053c59f4;
      }
      puVar2 = (undefined8 *)FUN_053b9af8(uVar5,lVar3);
      this_00 = (PIEmitter *)*puVar2;
      lVar3 = lVar4;
    } while (this_00 == (PIEmitter *)0x0);
    PIEmitter::~PIEmitter(this_00);
    AK::FreeHook(this_00);
  } while( true );
LAB_053c59f4:
  lVar3 = lVar4;
  if (iVar1 <= (int)lVar4) {
LAB_053c5a4c:
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x50)
              );
    std::vector<Sexy::PILayerDef,std::allocator<Sexy::PILayerDef>>::~vector
              ((vector<Sexy::PILayerDef,std::allocator<Sexy::PILayerDef>> *)(this + 0x38));
    std::vector<Sexy::PITexture*,std::allocator<Sexy::PITexture*>>::~vector
              ((vector<Sexy::PITexture*,std::allocator<Sexy::PITexture*>> *)(this + 0x20));
    std::vector<Sexy::PIEmitter*,std::allocator<Sexy::PIEmitter*>>::~vector
              ((vector<Sexy::PIEmitter*,std::allocator<Sexy::PIEmitter*>> *)(this + 8));
    return;
  }
  while( true ) {
    lVar4 = lVar3 + 1;
    puVar2 = (undefined8 *)FUN_053b9b0c(uVar5,lVar3);
    this_01 = (PITexture *)*puVar2;
    if (this_01 == (PITexture *)0x0) break;
    PITexture::~PITexture(this_01);
    AK::FreeHook(this_01);
    uVar5 = *(undefined8 *)(this + 0x20);
    iVar1 = FUN_053b9b00(uVar5,*(undefined8 *)(this + 0x28));
    lVar3 = lVar4;
    if (iVar1 <= (int)lVar4) goto LAB_053c5a4c;
  }
  goto LAB_053c59f4;
}

