#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x7f9705f6, "gpiochip_generic_config" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x41715c18, "seq_puts" },
	{ 0x48feca9, "devm_gpiochip_add_data" },
	{ 0x1b8822d8, "pinctrl_gpio_direction_output" },
	{ 0x99e44e4a, "irq_find_mapping" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x7b1e3a91, "gpiochip_generic_free" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0xac57ef18, "handle_edge_irq" },
	{ 0x4d1e17ac, "gpiochip_line_is_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xa549056c, "gpiochip_irqchip_add_key" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe2e7ff8a, "devm_pinctrl_register" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3d4d9e00, "gpiochip_get_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3f76bec5, "handle_bad_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5f141fad, "pinctrl_dev_get_drvdata" },
	{ 0x376d65ec, "gpiochip_add_pin_range" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x41de98a5, "gpiochip_set_chained_irqchip" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x880d0e9d, "radix_tree_lookup" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x8459aef1, "gpiochip_generic_request" },
	{ 0x1bc5eebe, "pinctrl_gpio_direction_input" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x9733af79, "handle_level_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3CA75B689406F90222D0BF9");
MODULE_INFO(rhelversion, "8.0");
