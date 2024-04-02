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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe9000478, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0x51ab2d40, "nf_ct_kill_acct" },
	{ 0x78f9b710, "nf_ct_l3proto_try_module_get" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2124474, "ip_send_check" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xd1f0de11, "inet_proto_csum_replace4" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xe8a7fef6, "__skb_checksum" },
	{ 0xb15b4109, "crc32c" },
	{ 0x2349d075, "nf_ct_iterate_destroy" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x27e1a049, "printk" },
	{ 0x2b87aa6b, "nf_unregister_net_hooks" },
	{ 0xb0148f8a, "nf_hook_entries_delete_raw" },
	{ 0xad1bb027, "nf_ct_free_hashtable" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdb540cfb, "nf_conntrack_alter_reply" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x31d67905, "nf_register_net_hooks" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xc0a5ffd7, "nf_conntrack_tuple_taken" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb602c57e, "nf_ct_l3proto_module_put" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7304539e, "nf_ct_extend_unregister" },
	{ 0xd7de3f4f, "nf_ct_helper_expectfn_register" },
	{ 0xf2a7675d, "skb_make_writable" },
	{ 0xe624ac61, "nf_ct_extend_register" },
	{ 0x425e2f2c, "__xfrm_decode_session" },
	{ 0xe1bf420f, "nf_ct_helper_expectfn_unregister" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x8975e70a, "nf_ct_seqadj_set" },
	{ 0x5c114647, "xfrm_lookup" },
	{ 0x6df2a790, "nf_hook_entries_insert_raw" },
	{ 0xae12eeca, "nf_ct_invert_tuplepr" },
	{ 0x89a5f4cb, "__do_once_done" },
	{ 0x81963de2, "nf_ct_ext_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,libcrc32c";


MODULE_INFO(srcversion, "5C22E80FF3E03B2D1CF98CE");
MODULE_INFO(rhelversion, "8.0");
