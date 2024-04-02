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
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0c5fb07, "__i2c_transfer" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x84277b2a, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";


MODULE_INFO(srcversion, "8B6F716F560B39C7F0CBBE0");
MODULE_INFO(rhelversion, "8.0");
