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
	{ 0xf6295c57, "tpm_pm_resume" },
	{ 0x36a8bdec, "tpm_pm_suspend" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xf41eb3c7, "tpm_chip_register" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xa29a929f, "tpmm_chip_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0xdf89529f, "tpm_chip_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tpm_i2c_atmel");

MODULE_INFO(srcversion, "42C3EE0080EE3E337F5D87C");
MODULE_INFO(rhelversion, "8.0");
