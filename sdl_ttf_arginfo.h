/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 3d26b90bf61212eb651051f439068293a4ae799d */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_TTF_Init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_TTF_Quit, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_TTF_OpenFont, 0, 2, TTF_Font, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_TTF_CloseFont, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, font, TTF_Font, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_TTF_RenderText_Solid, 0, 3, SDL_Surface, 0)
	ZEND_ARG_OBJ_INFO(0, font, TTF_Font, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, color, SDL_Color, 0)
ZEND_END_ARG_INFO()


ZEND_FUNCTION(TTF_Init);
ZEND_FUNCTION(TTF_Quit);
ZEND_FUNCTION(TTF_OpenFont);
ZEND_FUNCTION(TTF_CloseFont);
ZEND_FUNCTION(TTF_RenderText_Solid);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(TTF_Init, arginfo_TTF_Init)
	ZEND_FE(TTF_Quit, arginfo_TTF_Quit)
	ZEND_FE(TTF_OpenFont, arginfo_TTF_OpenFont)
	ZEND_FE(TTF_CloseFont, arginfo_TTF_CloseFont)
	ZEND_FE(TTF_RenderText_Solid, arginfo_TTF_RenderText_Solid)
	ZEND_FE_END
};


static const zend_function_entry class_TTF_Font_methods[] = {
	ZEND_FE_END
};

static zend_class_entry *register_class_TTF_Font(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "TTF_Font", class_TTF_Font_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_FINAL;

	return class_entry;
}
