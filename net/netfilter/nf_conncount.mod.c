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
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x22948148, "nf_ct_netns_put" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xece784c2, "rb_first" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0xb602d7cf, "nf_ct_netns_get" },
	{ 0x5d71f8dd, "nf_conntrack_find_get" },
	{ 0x89a5f4cb, "__do_once_done" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "799E1E1FB77B19AF0E13CA3");
MODULE_INFO(rhelversion, "8.0");
