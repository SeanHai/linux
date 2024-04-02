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
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf789deff, "input_register_device" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfe7843b, "input_event" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:WAC_I2C_EMR");

MODULE_INFO(srcversion, "4EC6761C1785BF68678F1DD");
MODULE_INFO(rhelversion, "8.0");
