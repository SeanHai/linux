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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5def83f9, "skb_push" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdfa89d8, "skb_pull_rcsum" },
	{ 0xc449f37c, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x1af5c32c, "llc_sap_close" },
	{ 0x6df835f7, "llc_build_and_send_ui_pkt" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=llc";


MODULE_INFO(srcversion, "4726E2E25AEF8F9AD7B3BA8");
MODULE_INFO(rhelversion, "8.0");
