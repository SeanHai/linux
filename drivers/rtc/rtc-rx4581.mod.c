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
	{ 0xc351790f, "driver_unregister" },
	{ 0x65f39767, "__spi_register_driver" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf1f77788, "devm_rtc_device_register" },
	{ 0x597f4baa, "spi_write_then_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:rx4581");

MODULE_INFO(srcversion, "291A760B4CBBE74963A0894");
MODULE_INFO(rhelversion, "8.0");
