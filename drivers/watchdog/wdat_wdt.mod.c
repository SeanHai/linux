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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xec788566, "acpi_target_system_state" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xff02d358, "devm_watchdog_register_device" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0x644c18c6, "devm_ioport_map" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf10de535, "ioread8" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xc5534d64, "ioread16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "59158D1E3C5AE302BA3CB40");
MODULE_INFO(rhelversion, "8.0");
