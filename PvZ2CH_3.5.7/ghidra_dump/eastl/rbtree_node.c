// Class: eastl::rbtree_node<EA::Text::AutoRefCount<EA::Text::Font>>


/* eastl::rbtree_node<EA::Text::AutoRefCount<EA::Text::Font> >::~rbtree_node() */

void __thiscall
eastl::rbtree_node<EA::Text::AutoRefCount<EA::Text::Font>>::~rbtree_node
          (rbtree_node<EA::Text::AutoRefCount<EA::Text::Font>> *this)

{
  EA::Text::AutoRefCount<EA::Text::Font>::~AutoRefCount
            ((AutoRefCount<EA::Text::Font> *)(this + 0x20));
  return;
}

