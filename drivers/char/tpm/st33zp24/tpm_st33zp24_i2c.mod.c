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
	{ 0xcb44743c, "devm_gpiod_get" },
	{ 0xc626eabb, "desc_to_gpio" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0xeeee7823, "st33zp24_probe" },
	{ 0x1fdd4517, "devm_acpi_dev_add_driver_gpios" },
	{ 0xfe9b9dd, "devm_gpio_request_one" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdd244f48, "st33zp24_pm_suspend" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0xf0c7c7a4, "st33zp24_remove" },
	{ 0x7ab1cc27, "st33zp24_pm_resume" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm_st33zp24";

MODULE_ALIAS("acpi*:SMO3324:*");
MODULE_ALIAS("of:N*T*Cst,st33zp24-i2c");
MODULE_ALIAS("of:N*T*Cst,st33zp24-i2cC*");
MODULE_ALIAS("i2c:st33zp24-i2c");

MODULE_INFO(srcversion, "D5D5523E37A23FDF153E8B5");
MODULE_INFO(rhelversion, "8.0");
