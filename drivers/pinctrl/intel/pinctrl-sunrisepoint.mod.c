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
	{ 0xdda2e5ea, "intel_pinctrl_resume" },
	{ 0x38a11a78, "intel_pinctrl_suspend" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xc7ef0ad2, "intel_pinctrl_probe" },
	{ 0xb98f5e97, "acpi_match_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pinctrl-intel";

MODULE_ALIAS("acpi*:INT344B:*");
MODULE_ALIAS("acpi*:INT345D:*");

MODULE_INFO(srcversion, "D3AE3EEE5351FE02DC0D7A1");
MODULE_INFO(rhelversion, "8.0");
