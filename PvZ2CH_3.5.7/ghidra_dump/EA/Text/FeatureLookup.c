// Class: EA::Text::FeatureLookup


/* EA::Text::FeatureLookup::~FeatureLookup() */

void __thiscall EA::Text::FeatureLookup::~FeatureLookup(FeatureLookup *this)

{
  eastl::fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator>::~fixed_vector
            ((fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> *)(this + 8));
  return;
}


/* EA::Text::FeatureLookup::FeatureLookup() */

void __thiscall EA::Text::FeatureLookup::FeatureLookup(FeatureLookup *this)

{
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)this,0);
  eastl::fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator>::fixed_vector
            ((fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> *)(this + 8));
  return;
}


/* EA::Text::FeatureLookup::FeatureLookup(EA::Text::FeatureLookup const&) */

void __thiscall EA::Text::FeatureLookup::FeatureLookup(FeatureLookup *this,FeatureLookup *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  eastl::fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator>::fixed_vector
            ((fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> *)(this + 8),
             (fixed_vector *)(param_1 + 8));
  return;
}

