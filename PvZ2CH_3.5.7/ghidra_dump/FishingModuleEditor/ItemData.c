// Class: FishingModuleEditor::ItemData


/* FishingModuleEditor::ItemData::ItemData() */

void __thiscall FishingModuleEditor::ItemData::ItemData(ItemData *this)

{
  *(undefined4 *)this = 0;
  Set8BytesTo0(this + 8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* FishingModuleEditor::ItemData::~ItemData() */

void __thiscall FishingModuleEditor::ItemData::~ItemData(ItemData *this)

{
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* FishingModuleEditor::ItemData::ItemData(FishingModuleEditor::ItemData const&) */

void __thiscall FishingModuleEditor::ItemData::ItemData(ItemData *this,ItemData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return;
}


/* FishingModuleEditor::ItemData::TEMPNAMEPLACEHOLDERVALUE(FishingModuleEditor::ItemData const&) */

ItemData * __thiscall FishingModuleEditor::ItemData::operator=(ItemData *this,ItemData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::operator=
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return this;
}

