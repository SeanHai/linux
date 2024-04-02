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
	{ 0xdd926335, "unregister_qdisc" },
	{ 0x69f77094, "register_qdisc" },
	{ 0x9aecbb9f, "tcf_classify" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xd4b235bf, "skb_get_hash_perturb" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xff68a52f, "qdisc_tree_reduce_backlog" },
	{ 0x66733015, "rtnl_kfree_skbs" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xdf4ea6d5, "tcf_block_get" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x9aff43a2, "gnet_stats_copy_app" },
	{ 0xfc3fcb39, "gnet_stats_copy_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x903c34cc, "tcf_block_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EDD52FA5D58F42F9609B26A");
MODULE_INFO(rhelversion, "8.0");
