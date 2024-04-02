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
	{ 0x9b391fee, "__nf_ct_refresh_acct" },
	{ 0x1e050fdc, "nf_ct_l4proto_register_one" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc6b23eef, "nf_ct_port_nlattr_to_tuple" },
	{ 0xd2f20150, "nf_ct_port_tuple_to_nlattr" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdf0affbd, "nf_ct_l4proto_unregister_one" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5240e36e, "nf_ct_l4proto_pernet_unregister_one" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xe8b5831c, "nf_ct_port_nla_policy" },
	{ 0x3824fda8, "nf_ct_l4proto_pernet_register_one" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xd505c3e0, "nf_ct_port_nlattr_tuple_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "EB07A9E765FC2D0C155D750");
MODULE_INFO(rhelversion, "8.0");
