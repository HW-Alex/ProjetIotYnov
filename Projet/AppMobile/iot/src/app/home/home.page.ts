import { Component } from '@angular/core';
import { Http } from '@angular/http';
@Component({
  selector: 'app-home',
  templateUrl: 'home.page.html',
  styleUrls: ['home.page.scss'],
})
export class HomePage {
  nb = '';
  constructor(private http: Http) {
  }

avance() {
 this.nb = 'avancer';
 const request = this.http.get('http://10.69.1.150:1880/' + 'av').subscribe();
 setTimeout(() => request.unsubscribe(), 1000);
}
stp() {
  this.nb = 'stop';
  const request = this.http.get('http://10.69.1.150:1880/' + 'st').subscribe();
  setTimeout(() => request.unsubscribe(), 1000);
}

left() {
  this.nb = 'left';
  const request = this.http.get('http://10.69.1.150:1880/' + 'left').subscribe();
  setTimeout(() => request.unsubscribe(), 1000);
}


right() {
  this.nb = 'right';
  const request = this.http.get('http://10.69.1.150:1880/' + 'right').subscribe();
  setTimeout(() => request.unsubscribe(), 1000);
}


back() {
 this.nb = 'back';
 const request = this.http.get('http://10.69.1.150:1880/' + 'back').subscribe();
 setTimeout(() => request.unsubscribe(), 1000);
}

}
