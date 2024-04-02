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
	{ 0x37a0cba, "kfree" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x28318305, "snprintf" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6a584776, "i2c_smbus_xfer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa52715c3, "amd756_smbus" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-amd756";


MODULE_INFO(srcversion, "1B9EC5788ED436CB8148B1C");
MODULE_INFO(rhelversion, "8.0");
