public class controleremoto {
    private televisao televisao;
    public controleremoto()
    {
        this.televisao = new televisao();
    }
    public void addVolume()
    {
        this.televisao.sobevolume();
    }
    public void sobevolume()
    {
        this.televisao.descevolume();
    }
    public void setVolume(int volume)
    {
        this.televisao.setvolume(volume);
    }
    public int getvolume()
    {
        return this.televisao.getvolume();
    }
    public void exibevolume()
    {
        System.out.println("Volume: "+getvolume());
    }
    public void addCanal()
    {
        this.televisao.sobecanal();
    }
    public void subcanal()
    {
        this.televisao.descecanal();
    }
    public void setCanal(int canal)
    {
        this.televisao.setcanal(canal);
    }
    public int getCanal()
    {
        return this.televisao.getcanal();
    }
    public void exibecanal()
    {
        System.out.println("Canal: "+ getCanal());
    }
}
