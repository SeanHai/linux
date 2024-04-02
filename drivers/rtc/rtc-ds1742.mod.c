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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xa2d40b66, "rtc_nvmem_register" },
	{ 0x2a1427e2, "__rtc_register_device" },
	{ 0xac5fb70a, "devm_rtc_allocate_device" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmaxim,ds1742");
MODULE_ALIAS("of:N*T*Cmaxim,ds1742C*");

MODULE_INFO(srcversion, "A5100AF91381FA1154628C0");
MODULE_INFO(rhelversion, "8.0");
