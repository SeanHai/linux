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
	{ 0x8733236, "intlog10" },
	{ 0xe6478472, "_dev_info" },
	{ 0x37bf01c8, "i2c_mux_add_adapter" },
	{ 0x671f107d, "i2c_mux_alloc" },
	{ 0xa0c01258, "__regmap_init_i2c" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x64806ce1, "regmap_bulk_write" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc78c5942, "regmap_bulk_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x4614de75, "regmap_exit" },
	{ 0x37a0f757, "i2c_mux_del_adapters" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,i2c-mux";

MODULE_ALIAS("i2c:rtl2832");

MODULE_INFO(srcversion, "E4AA7BA0986E80614D39AE8");
MODULE_INFO(rhelversion, "8.0");
