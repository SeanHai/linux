#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xcc63e6cd, "hid_unregister_driver" },
	{ 0x90988a50, "__hid_register_driver" },
	{ 0xfe7843b, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v00000C16p00000002");
MODULE_ALIAS("hid:b0003g*v00000C16p00000003");
MODULE_ALIAS("hid:b0003g*v00000C16p00000008");

MODULE_INFO(srcversion, "CB47EDECC568938D922D72C");
MODULE_INFO(rhelversion, "8.0");
