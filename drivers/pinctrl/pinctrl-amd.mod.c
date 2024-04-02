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
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xa549056c, "gpiochip_irqchip_add_key" },
	{ 0xe2f860d, "handle_simple_irq" },
	{ 0x376d65ec, "gpiochip_add_pin_range" },
	{ 0x110781ef, "gpiochip_add_data_with_key" },
	{ 0xe2e7ff8a, "devm_pinctrl_register" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0xa1a888e1, "devm_ioremap_nocache" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x5f141fad, "pinctrl_dev_get_drvdata" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xac57ef18, "handle_edge_irq" },
	{ 0x9733af79, "handle_level_irq" },
	{ 0xf6717f46, "irq_get_irq_data" },
	{ 0x3d4d9e00, "gpiochip_get_data" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x99e44e4a, "irq_find_mapping" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa95765cf, "gpiochip_remove" },
	{ 0x4d1e17ac, "gpiochip_line_is_irq" },
	{ 0x880d0e9d, "radix_tree_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:AMD0030:*");
MODULE_ALIAS("acpi*:AMDI0030:*");

MODULE_INFO(srcversion, "A95BE63B806197C3508151D");
MODULE_INFO(rhelversion, "8.0");
