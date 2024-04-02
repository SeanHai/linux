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
	{ 0xf9c388e5, "dev_err" },
	{ 0x110781ef, "gpiochip_add_data_with_key" },
	{ 0x50d96bc4, "bgpio_init" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x572e5012, "acpi_bus_get_device" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3d4d9e00, "gpiochip_get_data" },
	{ 0xa95765cf, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gpio-generic";

MODULE_ALIAS("acpi*:AMDF030:*");
MODULE_ALIAS("acpi*:AMDIF030:*");

MODULE_INFO(srcversion, "B028141B685780953C9F5F9");
MODULE_INFO(rhelversion, "8.0");
