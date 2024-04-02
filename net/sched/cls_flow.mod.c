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
	{ 0x1f50dde, "unregister_tcf_proto_ops" },
	{ 0xf7f409c6, "register_tcf_proto_ops" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x183a470e, "__skb_get_hash" },
	{ 0x3ae9232c, "__skb_flow_dissect" },
	{ 0xc2fb064b, "flow_keys_dissector" },
	{ 0x536c30ca, "from_kgid" },
	{ 0x4043059e, "from_kuid" },
	{ 0xb86d750b, "__tcf_em_tree_match" },
	{ 0xbe1babdf, "flow_get_u32_src" },
	{ 0x3a574bfa, "tcf_action_exec" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbb00e8ed, "tcf_queue_work" },
	{ 0x5902369b, "tcf_block_netif_keep_dst" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x3318f41c, "init_user_ns" },
	{ 0x5fda775f, "tcf_exts_validate" },
	{ 0xf1efc25e, "tcf_em_tree_validate" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x2af66623, "flow_get_u32_dst" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x55339c0c, "tcf_exts_dump_stats" },
	{ 0xf5196b92, "tcf_em_tree_dump" },
	{ 0xa1795a14, "tcf_exts_dump" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe7486c43, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x79ca810e, "tcf_em_tree_destroy" },
	{ 0x15f4e29a, "tcf_exts_destroy" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C06D0D87C315A516C7A2081");
MODULE_INFO(rhelversion, "8.0");
