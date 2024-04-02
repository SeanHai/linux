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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x6722cb76, "dibx000_exit_i2c_master" },
	{ 0x9bf6ebf9, "dibx000_reset_i2c_master" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xad829ccd, "dibx000_get_i2c_adapter" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x8733236, "intlog10" },
	{ 0x818b2e8e, "dibx000_init_i2c_master" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dibx000_common,dvb-core";


MODULE_INFO(srcversion, "04170B05C99E71A933424A3");
MODULE_INFO(rhelversion, "8.0");
