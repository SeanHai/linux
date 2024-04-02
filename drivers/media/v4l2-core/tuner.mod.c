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
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe9b41467, "param_ops_string" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x1b7ade5b, "v4l2_device_unregister_subdev" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xf65fde3e, "v4l2_i2c_subdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("i2c:tuner");

MODULE_INFO(srcversion, "1FF68B22BB90DAB7ED8324A");
MODULE_INFO(rhelversion, "8.0");
