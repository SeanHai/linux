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
	{ 0x2423d4cd, "led_trigger_unregister" },
	{ 0x577cee77, "led_trigger_register" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x65ea44fe, "led_blink_set" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xc0a00ee8, "led_set_brightness" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C283CC7CEB7C31E388A59A0");
MODULE_INFO(rhelversion, "8.0");
