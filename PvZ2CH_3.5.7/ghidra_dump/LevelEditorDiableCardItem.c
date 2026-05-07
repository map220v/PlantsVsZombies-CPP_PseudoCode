// Class: LevelEditorDiableCardItem


/* LevelEditorDiableCardItem::~LevelEditorDiableCardItem() */

void __thiscall
LevelEditorDiableCardItem::~LevelEditorDiableCardItem(LevelEditorDiableCardItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06959230;
  LevelEditorCardItem::~LevelEditorCardItem((LevelEditorCardItem *)this);
  return;
}


/* LevelEditorDiableCardItem::~LevelEditorDiableCardItem() */

void __thiscall
LevelEditorDiableCardItem::~LevelEditorDiableCardItem(LevelEditorDiableCardItem *this)

{
  ~LevelEditorDiableCardItem(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorDiableCardItem::LevelEditorDiableCardItem() */

void __thiscall
LevelEditorDiableCardItem::LevelEditorDiableCardItem(LevelEditorDiableCardItem *this)

{
  LevelEditorCardItem::LevelEditorCardItem((LevelEditorCardItem *)this);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface
            ((LevelEditorCardPlantInterface *)(this + 0x110));
  this[0x114] = (LevelEditorDiableCardItem)0x0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined ***)this = &PTR_GetClass_06959230;
  return;
}

