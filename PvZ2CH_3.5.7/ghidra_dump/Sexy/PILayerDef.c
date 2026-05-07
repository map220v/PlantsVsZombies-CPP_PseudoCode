// Class: Sexy::PILayerDef


/* Sexy::PILayerDef::~PILayerDef() */

void __thiscall Sexy::PILayerDef::~PILayerDef(PILayerDef *this)

{
  PIValue::~PIValue((PIValue *)(this + 0xd0));
  PIValue2D::~PIValue2D((PIValue2D *)(this + 0x68));
  std::vector<Sexy::PIForce,std::allocator<Sexy::PIForce>>::~vector
            ((vector<Sexy::PIForce,std::allocator<Sexy::PIForce>> *)(this + 0x50));
  std::vector<Sexy::PIBlocker,std::allocator<Sexy::PIBlocker>>::~vector
            ((vector<Sexy::PIBlocker,std::allocator<Sexy::PIBlocker>> *)(this + 0x38));
  std::vector<Sexy::PIDeflector,std::allocator<Sexy::PIDeflector>>::~vector
            ((vector<Sexy::PIDeflector,std::allocator<Sexy::PIDeflector>> *)(this + 0x20));
  std::vector<Sexy::PIEmitterInstanceDef,std::allocator<Sexy::PIEmitterInstanceDef>>::~vector
            ((vector<Sexy::PIEmitterInstanceDef,std::allocator<Sexy::PIEmitterInstanceDef>> *)
             (this + 8));
  std::string::~string((string *)this);
  return;
}


/* Sexy::PILayerDef::PILayerDef() */

void __thiscall Sexy::PILayerDef::PILayerDef(PILayerDef *this)

{
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  PIValue2D::PIValue2D((PIValue2D *)(this + 0x68));
  PieceConfig::PieceConfig((PieceConfig *)(this + 200));
  PIValue::PIValue((PIValue *)(this + 0xd0));
  return;
}


/* Sexy::PILayerDef::PILayerDef(Sexy::PILayerDef const&) */

void __thiscall Sexy::PILayerDef::PILayerDef(PILayerDef *this,PILayerDef *param_1)

{
  FUN_05475d88();
  std::vector<Sexy::PIEmitterInstanceDef,std::allocator<Sexy::PIEmitterInstanceDef>>::vector
            ((vector<Sexy::PIEmitterInstanceDef,std::allocator<Sexy::PIEmitterInstanceDef>> *)
             (this + 8),(vector *)(param_1 + 8));
  std::vector<Sexy::PIDeflector,std::allocator<Sexy::PIDeflector>>::vector
            ((vector<Sexy::PIDeflector,std::allocator<Sexy::PIDeflector>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  std::vector<Sexy::PIBlocker,std::allocator<Sexy::PIBlocker>>::vector
            ((vector<Sexy::PIBlocker,std::allocator<Sexy::PIBlocker>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  std::vector<Sexy::PIForce,std::allocator<Sexy::PIForce>>::vector
            ((vector<Sexy::PIForce,std::allocator<Sexy::PIForce>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  PIValue2D::PIValue2D((PIValue2D *)(this + 0x68),(PIValue2D *)(param_1 + 0x68));
  FPoint::FPoint((FPoint *)(this + 200),(TPoint *)(param_1 + 200));
  PIValue::PIValue((PIValue *)(this + 0xd0),(PIValue *)(param_1 + 0xd0));
  return;
}

