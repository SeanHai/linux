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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x253ac21f, "stp_proto_unregister" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc8df8267, "dev_mc_add" },
	{ 0xece784c2, "rb_first" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xc8b0abe9, "stp_proto_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd966d7be, "llc_mac_hdr_init" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xcf1309ab, "dev_mc_del" },
	{ 0x5def83f9, "skb_push" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x37a0cba, "kfree" },
	{ 0xca9360b5, "rb_next" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x8f648a94, "param_ops_uint" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=stp,llc";


MODULE_INFO(srcversion, "57B60E2156420EA640CA4B3");
MODULE_INFO(rhelversion, "8.0");
