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
	{ 0xef18f7e, "xfrm6_protocol_register" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc4b52f92, "skb_to_sgvec" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xab6172c, "xfrm_unregister_type" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3813dfae, "pskb_put" },
	{ 0x4c4aa369, "skb_page_frag_refill" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2395715c, "skb_cow_data" },
	{ 0x602e9b5b, "ip6_redirect" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x4c64aec0, "xfrm_input_resume" },
	{ 0xfb578fc5, "memset" },
	{ 0x2d772e61, "skb_checksum" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x5def83f9, "skb_push" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xcc845b48, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf3ae8ae6, "__secpath_destroy" },
	{ 0xb0c53c85, "xfrm_register_type" },
	{ 0xd1c07f87, "xfrm6_find_1stfragopt" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xcd5a6311, "xfrm_output_resume" },
	{ 0x1ddf1b54, "ip6_update_pmtu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdfa89d8, "skb_pull_rcsum" },
	{ 0x98c2d757, "__xfrm_state_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xdbbe7391, "crypto_aead_setauthsize" },
	{ 0x37ba5691, "crypto_alloc_aead" },
	{ 0xe5dad3af, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x67d084fd, "___pskb_trim" },
	{ 0x28318305, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xb67550ce, "xfrm6_rcv" },
	{ 0x2a6bb061, "__put_page" },
	{ 0x9dabce8b, "xfrm6_protocol_deregister" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EED876D8381883DDEAA50F0");
MODULE_INFO(rhelversion, "8.0");
