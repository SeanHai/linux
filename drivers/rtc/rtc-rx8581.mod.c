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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x2a1427e2, "__rtc_register_device" },
	{ 0xac5fb70a, "devm_rtc_allocate_device" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xc78c5942, "regmap_bulk_read" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x64806ce1, "regmap_bulk_write" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cepson,rx8581");
MODULE_ALIAS("of:N*T*Cepson,rx8581C*");
MODULE_ALIAS("i2c:rx8581");

MODULE_INFO(srcversion, "B1B9F9D033577C6308CA9A7");
MODULE_INFO(rhelversion, "8.0");
