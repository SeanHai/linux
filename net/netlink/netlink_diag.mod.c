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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x30aada06, "rhashtable_walk_exit" },
	{ 0x9d8ed0db, "sock_diag_put_meminfo" },
	{ 0x7b7c3a6b, "rhashtable_walk_next" },
	{ 0x41ee8ccc, "sock_diag_unregister" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xb29c9658, "sock_i_ino" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xb8a9fc36, "sock_diag_register" },
	{ 0x9902e936, "rhashtable_walk_stop" },
	{ 0xb6a9f7d, "rhashtable_walk_start_check" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xad843a29, "nl_table" },
	{ 0xa731f387, "nl_table_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x9355cb62, "rhashtable_walk_enter" },
	{ 0x37a0cba, "kfree" },
	{ 0xf60e31a1, "sock_diag_save_cookie" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0xfe3ac6f4, "__netlink_dump_start" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "245EE3E744173D67B28762B");
MODULE_INFO(rhelversion, "8.0");
