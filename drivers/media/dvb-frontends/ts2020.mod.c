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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x4614de75, "regmap_exit" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xa0c01258, "__regmap_init_i2c" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xe6478472, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x62a67793, "i2c_new_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ts2020");
MODULE_ALIAS("i2c:ts2022");

MODULE_INFO(srcversion, "440875C1F71D0AA1112CF58");
MODULE_INFO(rhelversion, "8.0");
