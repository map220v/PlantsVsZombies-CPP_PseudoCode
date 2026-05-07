// Class: LevelEditorCardPlant


/* LevelEditorCardPlant::~LevelEditorCardPlant() */

void __thiscall LevelEditorCardPlant::~LevelEditorCardPlant(LevelEditorCardPlant *this)

{
  *(undefined ***)this = &PTR_GetClass_06958bf0;
  LevelEditorCardItem::~LevelEditorCardItem((LevelEditorCardItem *)this);
  return;
}


/* LevelEditorCardPlant::~LevelEditorCardPlant() */

void __thiscall LevelEditorCardPlant::~LevelEditorCardPlant(LevelEditorCardPlant *this)

{
  ~LevelEditorCardPlant(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorCardPlant::LevelEditorCardPlant() */

void __thiscall LevelEditorCardPlant::LevelEditorCardPlant(LevelEditorCardPlant *this)

{
  LevelEditorCardItem::LevelEditorCardItem((LevelEditorCardItem *)this);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface
            ((LevelEditorCardPlantInterface *)(this + 0x110));
  *(undefined ***)this = &PTR_GetClass_06958bf0;
  return;
}

